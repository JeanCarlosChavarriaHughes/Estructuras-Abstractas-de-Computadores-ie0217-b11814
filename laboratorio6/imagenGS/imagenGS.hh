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
		ImageGS(Mat &imagen);
		//Constructor
		~ImageGS(void);
		//Destructor
		void showImage(void);
		//Muestra la imagen almacenada en data en una ventana
		void medianFilter(int size);
		//Filtra la imagen con ruido
		void sobelOperator(int *);
		//Detecta bordes en la imagen
		void thershold(void);
		//segmenta la imagen a travez del valor umbral
		void variance(int a, int k);
		//calcula la varianza
};
#endif
