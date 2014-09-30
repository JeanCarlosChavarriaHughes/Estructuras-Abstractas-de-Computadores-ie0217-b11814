//imagenRGB.cpp

#include "imagenRGB.hh"
#include <cstdlib>

using namespace std;
using namespace cv;

	ImageRGB::ImageRGB(Mat &imagen){
	//Este es el constructor que lee una imagen y la 
	//almacena en arreglo apuntado por data.

	this -> width = imagen.cols;
	this -> height = imagen.rows;
	this -> data = new unsigned char[3*width*height];
	this -> data = imagen.data;
	cout<<"Constructor ejecutado"<<endl;
	}

	ImageRGB::~ImageRGB(void){
		delete data;
		cout<<"Deconstructor ejecutado"<<endl;
	}
	//
	
void ImageRGB::showImage(void){
	//
	Mat imagen(this->height, this->width,CV_8UC3);
	imagen.data = this -> data;
	imshow("Ventana1",imagen);
	waitKey(0);
	cout<<"showImage executed"<<endl;
	}

void ImageRGB::toGray(void){
	//
	cout<<"passing to gray scale"<<endl;
}
void ImageRGB::drawCircle(int x, int y, unsigned int radius){
	//
	Mat imagen(this -> height,this -> width,CV_8UC3);
	imagen.data = this -> data;
	circle(imagen,Point(240,200),25,Scalar(255,0,0,0),-1);
	cout<<"drawing a circle"<<endl;
	}