//Este es el main de la clase imagenRGB

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <iostream>
#include "imagenRGB.hh"
/**********************************************************************/

//using namespace std;

int main(void){
	cout<<"Ingrese el nombre del archivo:"<<endl;
	const string fileName;
	//cin>>fileName;
	//Mat imagen = imread(fileName, 1);
	//averiguar porque no me permite ingresar del teclado
	Mat imagen = imread("imagen1", 1);
	ImageRGB AUX(imagen);
//	cout << imagen.cols << "x " << imagen1.rows << endl;
	AUX.drawCircle(350,350,25);
	AUX.toGray();
	AUX.showImage();
	return 0;
};


