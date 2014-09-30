#include "imagenGS.hh"

ImageGS::ImageGS(Mat &image){
	
	this->width = image.cols;
	this->height = image.rows;
	this->data = new unsigned char[3*width*height];
	this->data = image.data;
	cout << "Se ejecutó el constructor" << endl;
}

ImageGS::~ImageGS(void){
	
	//delete data;
	cout << "Se ejecutó el destructor" << endl;
}

void ImageGS::showImage(void){
	
	Mat aux(this->height, this->width, CV_8UC3);
	aux.data = this->data;
	imshow("Prueba", aux);
	waitKey(0);
	cout << "Se ejecutó showImage" << endl;
}
