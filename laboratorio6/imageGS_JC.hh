#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <iostream>

using namespace cv;
using namespace std;

#ifndef IMAGEGSCLASS
#define IMAGEGSCLASS

class ImageGS{
	
	private:
		int width;
		int height;
		unsigned char* data;
	
	public:
		ImageGS(&Mat);
		//Constructor
		~ImageGS(void);
		//Destructor
		void showImage(void);
		//Muestra la imagen almacenada en data en una ventan
		void medianFilter(int size);
		//Filtra la imagen con ruido
		void sobelOperator(int);
		//Detecta bordes en la imagen
};
#endif
