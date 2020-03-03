#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;

int main( int argc, char** argv ){

	std::cout << "hello cv" << std::endl;
	cv::Mat image;
	
	image = cv::imread("../test_image.jpg" );

	if( !image.data) {
		cout << "error loading image" << endl;
		return -1;
	}

	cv::blur(image, image, cv::Size(21, 21));
	cv::Mat grayImg;
	cv::cvtColor(image, grayImg, cv::COLOR_BGR2GRAY, 1);

	cv::namedWindow("Display Image", cv::WINDOW_AUTOSIZE);
	cv::imshow("Display Image", grayImg);

	cv::waitKey(0);

	return 0;
}
