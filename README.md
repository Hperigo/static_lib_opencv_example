# Compilling and using Opencv as a static library with cmake


This is a guide for anyone who wants to use opencv as a static library with cmake and without homebrew on MacOs. 

It took me some time to figure out how to do it so I'm writing this for the future me and for anyone who finds the information useful. Be aware that I might miss something.


## Cloning and preparing
1. Clone opencv repo from github 
2. download cmake GUI ( this will make it easier to set the options when generating the opencv build project )

3. Click the `Browse source...` button and select the opencv repo folder. 
4. Create a build folder and select that on `Browse Build`

## Setup options:

1. uncheck `BUILD_SHARED_LIBS` <----- !important
2. set `CMAKE_INSTALL_PREFIX` to the directory where you want the library files to go.

3. some important options that you will probrably use: 
	a. `BUILD_opencv_core` 
	b. `BUILD_opencv_highgui` for anything related to ui, opening a window etc...
	c. `BUILD_opencv_imgcodecs` for loading and saving images
	d. `BUILD_opencv_imgproc`  for resizing etc... 

4. uncheck  any other option that you might not use. for examaple:
	a. `BUILD_EXAMPLES`
	b. `BUILD_JAVA`
	c. `BUILD_TESTS`
	d. `WITH_FFMPEG`
	e. `WITH_PROBUFF`, `BUILD_PROTOBUF`
	f. `BUILD_opencv_python2` and other python related settings...
	g. `WITH_1394`


5. Set `CMAKE_OSX_ARCHITECTURES` to `x86_64`

6. Change “CMAKE_OSX_SYSROOT” to /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk

7. Click on `Generate` button and go via terminal to your build directory.

8. on the build directory, type:
 ```
 make
 make install ( this will copy the files to the install directory that you set on step 2)
 ```


## Other helpfull sites:
[https://outofbedlam.github.io/opencv/2015/07/15/Build-OpenCV-MacOSX/](https://outofbedlam.github.io/opencv/2015/07/15/Build-OpenCV-MacOSX/)

[https://shiffman.net/opencv/2011/01/23/how-to-build-opencv-static-libraries-mac-os-x/](https://shiffman.net/opencv/2011/01/23/how-to-build-opencv-static-libraries-mac-os-x/)
