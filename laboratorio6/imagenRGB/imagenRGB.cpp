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
	Mat imagen(this->height, this -> width, CV_8UC3);
	imagen.data = this -> data;
	cout<<"passing to gray scale"<<endl;
	
	float* B= new float[(this->height)*(this->width)];//matriz de azul
	float* G= new float[(this->height)*(this->width)];//matriz de verde
	float* R= new float[(this->height)*(this->width)];//matriz de rojo
	float* Y= new float[(this->height)*(this->width)];//matriz final

	int altura = this->height;
	int anchura = this->width;
	//int* U=new int [(this->height)*(this->width)];
	//este entero U es para convertirlo a int

	for(int i = 0; i<(altura*anchura); i=i+3){
		B[i]=(float)this->data[3*i];
		G[i]=(float)this->data[3*i+1];
		R[i]=(float)this->data[3*i+2];
		Y[i]=0.299*R[i]+0.587*G[i]+0.114*B[i];
		//U[i]=(int)255*Y[i];
		//conversion de int
	}

	//Mat imagenGray(altura, anchura,CV_8UC1, U);//Float,, C channel, 1 un canal
	Mat imagenGray(altura, anchura,CV_32FC1, U);//Float,, C channel, 1 un canal
	cout<<"passing to gray scale"<<endl;
	//imshow("escala grises",imagenGray);
	imwrite("imagen_gray_scale.png",imagenGray);
	
}
void ImageRGB::drawCircle(int x, int y, unsigned int radius){
	//
	Mat imagen(this -> height,this -> width,CV_8UC3);
	imagen.data = this -> data;
	circle(imagen,Point(x,y),radius,Scalar(255,0,0,0),-1);
	cout<<"drawing a circle"<<endl;
	imwrite("imagen_con_circulo.png",imagen);
	}