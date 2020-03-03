cmake_minimum_required(VERSION 3.0.0 FATAL_ERROR)

project(cv_test)

#mac os specific libraries
find_package(ZLIB REQUIRED)
find_library(COCOA_LIBRARY Cocoa)
find_library(FOUNDATION_LIBRARY Foundation)


include_directories( 
	"${CMAKE_CURRENT_SOURCE_DIR}/libs/opencv_install_dir/include/opencv-4.2.0-dev/"
)

add_executable(cv_test main.cpp)

# Opencv needs c++11
set_property(TARGET cv_test PROPERTY CXX_STANDARD 11) 

target_link_libraries( cv_test
	
	"${ZLIB_LIBRARIES}"
	"${COCOA_LIBRARY}"
	"${FOUNDATION_LIBRARY}"

	"${CMAKE_CURRENT_SOURCE_DIR}/libs/opencv_install_dir/lib/libopencv_core.a"
	"${CMAKE_CURRENT_SOURCE_DIR}/libs/opencv_install_dir/lib/libopencv_highgui.a"
	"${CMAKE_CURRENT_SOURCE_DIR}/libs/opencv_install_dir/lib/libopencv_imgcodecs.a"
	"${CMAKE_CURRENT_SOURCE_DIR}/libs/opencv_install_dir/lib/libopencv_photo.a"
	"${CMAKE_CURRENT_SOURCE_DIR}/libs/opencv_install_dir/lib/libopencv_imgproc.a"
	"${CMAKE_CURRENT_SOURCE_DIR}/libs/opencv_install_dir/lib/opencv-4.2.0-dev/3rdparty/liblibjpeg-turbo.a"
)