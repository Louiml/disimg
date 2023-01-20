#include <opencv2/opencv.hpp>
using namespace cv;

int main()
{
    Mat image = imread("(iamgeORurl).jpg", IMREAD_COLOR);
    if(!image.data)
    {
        cout << "Could not open or find the image" << endl;
        return -1;
    }

    namedWindow("IMAGE", WINDOW_NORMAL);
    imshow("IMAGE", image);
    waitKey(0);
    return 0;
}
