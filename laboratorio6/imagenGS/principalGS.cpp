#include "imagenGS.hh"
#include <iostream>

int main(void){
	Mat imagen1 = imread("Pelicula2.jpg",1);
	ImageGS A(imagen1);
	cout << imagen1.cols << "x " << imagen1.rows << endl;
	A.showImage();
	return 0;
}
