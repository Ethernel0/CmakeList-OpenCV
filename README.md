# CmakeList-OpenCV
*Repository for my YouTube video !*

**"How to configure CMAKELIST to use OpenCV"**
https://youtu.be/fjq8eTuHnMM

**"How to install Microsoft Compiler"**
https://youtu.be/OJFeoXVeIY8

**Probably everything you need, or you can clone the repo and try it out yourself !**
Before starting, in this example the pre-built OpenCV package is installed from "https://community.chocolatey.org/packages/OpenCV"
And If I'm not wrong it's built for Microsoft Visual Studio compiler, so you'll need to use "cl" which is "Microsoft (R) C/C++ Optimizing Compiler"
Check the second Youtube Video I've made to install the compiler !

If you want to use it with MinGW or GCC you will have to find the correct version for it or maybe build it yourself !

>> Environment variables 
```
(Double click on "PATH" and create a new variable !)
User Variables / Path / C:\tools\opencv\build\x64\vc15\bin
```

>> System Variables:
```
OPENCV_DIR            | C:\tools\opencv\build\x64\vc14\lib
OPENCV_INCLUDE_PATHS  | C:\tools\opencv\build\include
OPENCV_LINK_LIBS      | opencv_world460
OPENCV_LINK_PATHS     | C:\tools\opencv\build\x64\vc15\lib
OPENCV_PATH           | C:\tools\opencv
```

>> CMAKELIST :
```
cmake_minimum_required(VERSION 3.23)
project(matchtest) /// <<-- Be sure to use the correct project name, in this case "matchtest" is my personal one !

set(CMAKE_CXX_STANDARD 23) /// <<-- If you wanna change the language standard
set(ENV{OPENCV_DIR} "C:\\opencv\\opencv\\build") /// <<-- And yes do not forget to change the path !
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/")

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(matchtest main.cpp) /// <<-- Change "matchtest"

set(OpenCV_LIBS opencv_core opencv_imgproc opencv_highgui opencv_imgcodecs)

target_link_libraries(matchtest ${OpenCV_LIBS}) /// <<-- Like I said be sure to proprely rename the project name !
```
