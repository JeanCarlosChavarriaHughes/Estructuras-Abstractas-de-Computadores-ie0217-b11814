/**
 * Ejemplo para OpenCV
 * 
 */ 

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <iostream>
/**********************************************************************/
using namespace cv;
using namespace std;
/**********************************************************************/

int main(int argc, char** argv ){
	if( argc != 2 ){
		cout <<" Usage: display_image ImageToLoadAndDisplay" << endl;
		return -1;}
	Mat image = imread (argv[1], CV_LOAD_IMAGE_COLOR);
	if(!image.data){
	// if (imge.empty()) { otra opción
	cout << "Could not open or find the image" << endl;
	return -1;}
	Mat gray;
	cvtColor(image, gray, CV_BGR2GRAY);
	
	namedWindow("Display Window", CV_WINDOW_AUTOSIZE);
	imshow("Display Window", image);

	namedWindow("Result window", CV_WINDOW_AUTOSIZE);
	imshow("Result window", gray);
	waitKey(0); 					  // wait for a keypress
	destroyWindow("Display Window");  // destroy the window
	destroyWindow("Result window" );  // destroy the window
	
	return 0;
}
