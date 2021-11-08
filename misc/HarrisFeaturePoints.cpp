#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
 
using namespace cv;
using namespace std;
 
int thresh = 105;
 
int main( )
{
    Mat src, // source image 
        gray, // gray image 
         dst, // destination image  
         dst_norm, // normalized destination image  
         dst_norm_scaled; // scaled normalized destination image

    // Load source image and convert it to gray
    src = imread( "Squichi.jpg", 1 );

    // Grayscale conversion
    cvtColor( src, gray, CV_BGR2GRAY );    
    dst = Mat::zeros( src.size(), CV_32FC1 );

    // counter //
     int counter = 0;
 
    // Detecting corners
    cornerHarris( gray, dst, 7, 5, 0.05, BORDER_DEFAULT );
 
    // Normalizing
    normalize( dst, dst_norm, 0, 255, NORM_MINMAX, CV_32FC1, Mat() );
    convertScaleAbs( dst_norm, dst_norm_scaled );
 
    // Drawing a circle around corners
    for( int j = 0; j < dst_norm.rows ; j++ )
    { for( int i = 0; i < dst_norm.cols; i++ )
    {
        if( (int) dst_norm.at<float>(j,i) > thresh )
        {
            circle( dst_norm_scaled, Point( i, j ), 5,  Scalar(0), 2, 8, 0 );
            circle( gray, Point( i, j ), 5,  Scalar(0), 2, 8, 0 );
            counter++;
        }
    }
    }
 
 
    // Showing the result
    namedWindow( "Harris_corners_window", CV_WINDOW_AUTOSIZE );
    imshow( "Harris_corners_window", gray);
    namedWindow( "Harris_corners_norm_scaled", CV_WINDOW_AUTOSIZE );
    imshow( "Harris_corners_norm_scaled", dst_norm_scaled);
    std::cout <<" Dirt Score = "<< counter << std::endl;
 
    waitKey(0);
    return(0);
}
