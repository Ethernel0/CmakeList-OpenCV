#pragma ide diagnostic ignored "EndlessLoop"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include <opencv2/core/utility.hpp>

int main()
{

    cv::namedWindow("test", cv::WINDOW_NORMAL);
    cv::Mat needle = cv::imread("C:\\Users\\Ethernel\\Desktop\\needle.png", cv::IMREAD_COLOR); ///Change path to your image
    cv::Mat source = cv::imread("C:\\Users\\Ethernel\\Desktop\\source.png", cv::IMREAD_COLOR); ///Change path to your image

    cv::Mat result;
    cv::matchTemplate(source, needle, result, cv::TM_CCOEFF_NORMED);
    cv::imshow("test", result);
    cv::waitKey(0);

}
