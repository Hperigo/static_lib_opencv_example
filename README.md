# Compilling and using Opencv as a static library with cmake


This is a guide for anyone who wants to use opencv as a static library with cmake and without homebrew. 

It took me some time to figure out how to do this, so I'm writing this for the future me and for anyone who finds the info usefull. But be aware that I might be forgetting something. 

## Steps:

1. Clone opencv repo from github
2. download cmake GUI ( this will make it easier to set the options when generating a project )

3. Click the `Browse source...` button and select the opencv repo folder. 
4. Create a build folder and select that on `Browse Build`
5. uncheck `BUILD_SHARED_LIBS` <----- !important

6. set `CMAKE_INSTALL_PREFIX` to the directory where you want the library files to go.

7. some important options that you will probrably use: 
	a. `BUILD_opencv_core` 
	b. `BUILD_opencv_highgui` for anything related to ui, opening a window etc...
	c. `BUILD_opencv_imgcodecs` for loading and saving images
	d. `BUILD_opencv_imgproc`  for resizing etc... 

8. uncheck  any other option that you might not use. for examaple:
	a. `BUILD_EXAMPLES`
	b. `BUILD_JAVA`
	c. `BUILD_TESTS`
	d. `WITH_FFMPEG`
	e. `WITH_PROBUFF`, `BUILD_PROTOBUF`
	f. `BUILD_opencv_python2` and other python related settings...
	g. `WITH_1394`


9. Set `CMAKE_OSX_ARCHITECTURES` to `x86_64`

10. Change “CMAKE_OSX_SYSROOT” to /Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk

11. Click on `Generate` button and go via terminal to your build directory.

12. on the build directory, type:
 ```
 make
 make install ( this will copy the files to the install directory that you set on step 6)
 ```


## Other helpfull sites:
	

	https://outofbedlam.github.io/opencv/2015/07/15/Build-OpenCV-MacOSX/

	https://shiffman.net/opencv/2011/01/23/how-to-build-opencv-static-libraries-mac-os-x/
