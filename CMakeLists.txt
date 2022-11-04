cmake_minimum_required(VERSION 3.23)
project(CmakeOpencvLinkTest)

set(CMAKE_CXX_STANDARD 23)
set(ENV{OPENCV_DIR} "C:\\opencv\\opencv\\build")
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/cmake/")

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(CmakeOpencvLinkTest main.cpp)

set(OpenCV_LIBS opencv_core opencv_imgproc opencv_highgui opencv_imgcodecs)

target_link_libraries(CmakeOpencvLinkTest ${OpenCV_LIBS})


