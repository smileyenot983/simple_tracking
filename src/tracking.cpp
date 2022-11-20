
#include <opencv2/opencv.hpp>
#include <iostream>

int main()
{
    cv::VideoCapture cap("../data/v3.mp4");

    if(!cap.isOpened())
    {
        std::cout << "failed openin video" << std::endl;
        return -1;

    }

    while(1)
    {
        cv::Mat frame;

        cap >> frame;

        if(frame.empty())
        {
            break;
        }

        cv::imshow("frame", frame);

        char c = (char)cv::waitKey(25);
        if(c==27)
        {
            break;
        }
    }

    cap.release();

    cv::destroyAllWindows();


    return 0;
}