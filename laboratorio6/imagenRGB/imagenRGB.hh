//imagenRGB.hh

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <iostream>

using namespace cv;
using namespace std;

#ifndef IMAGERBCLASS
#define IMAGERBCLASS

class ImageRGB{

private:
	int width;
	int height;
	unsigned char* data; //revisar porque asi no compila 
	//char* data;

public:
	ImageRGB(Mat &);
	//
	~ImageRGB(void);
	//
	void showImage(void);
	//
	void toGray(void);
	//
	void drawCircle(int x, int y, unsigned int radius);
	//
};
#endif
