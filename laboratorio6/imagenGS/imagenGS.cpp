#include "imagenGS.hh"
//#include "sobelClass.cpp"
//#include "convolutionClass.cpp"


ImageGS::ImageGS(Mat &image){
	
	this->width = image.cols;
	this->height = image.rows;
	this->data = new unsigned char[3*width*height];
	this->data = image.data;
	cout << "Se ejecutó el constructor" << endl;
}

ImageGS::~ImageGS(void){
	cout << "Se ejecutó el destructor" << endl;
}

void ImageGS::showImage(void){
	Mat imagen(this->height, this->width,CV_8UC3);
	imagen.data = this -> data;
	imshow("Ventana1",imagen);
	waitKey(1950);
	cout<<"showImage executed"<<endl;
	}

void ImageGS::medianFilter(int size){
	Mat imagen(this->height, this -> width, CV_8UC3);
	imagen.data = this -> data;
	cout<<"Aplicando el filtro medio"<<endl;
	
	int altura = this->height;
	int anchura = this->width;
	
	for(int i = (3*(size+size*anchura)); i < (3*((anchura*altura)-(size+size*anchura))); i++){//Posiciones de la matriz Y que se deben recorrer
		int sumatoriaTotal = 0;
		for(int j = -size; j <= size; j++){//la variable j determina el ancho de kernel
			for(int g = -size; g <= size; g++){//la variable i determina el alto del kernel
				
				sumatoriaTotal = sumatoriaTotal + (int)this->data[i + 3*j + 3*g*anchura];
				
			}	
		}
		
		sumatoriaTotal = sumatoriaTotal/((2*size+1)*(2*size+1));//se pasa la parte entera
		imagen.data[i] = sumatoriaTotal;		
	}
	
	Mat imagenFilter(altura, anchura,CV_8UC3, imagen.data);//Float,, C channel, 1 un canal
	imwrite("imagen_median_filter.png",imagen);
	//imshow("Median Filter",imagen);
	waitKey(1950);
}

void ImageGS::sobelOperator(int* kernel){
	int size = (sqrt(sizeof(kernel)+1)-1)/2;
	int kernel_width = sqrt(sizeof(kernel)+1);
	
	Mat imagen(this->height, this -> width, CV_8UC1);
	imagen.data = this -> data;
		
	int altura = this->height;
	int anchura = this->width;
	
	for(int i = (size+size*anchura); i < ((anchura*altura)-(size+size*anchura)); i++){//Posiciones de la matriz Y que se deben recorrer
		int sumatoriaTotal = 0;
		for(int j = -size; j <= size; j++){//ancho del cuadro pequeño
			for(int g = -size; g <= size; g++){//alto del cuadro pequeño
				
				sumatoriaTotal = sumatoriaTotal + (int)this->data[i + j + g*anchura]*kernel[(sizeof(kernel)+1)/2+ j + g*kernel_width];
				/*if(sumatoriaTotal>255){
					sumatoriaTotal = sumatoriaTotal%255;
				}/*/
												
				if(i<(size+size*anchura + 1)){
					cout<<kernel[(sizeof(kernel)+1)/2+ j + g*kernel_width]<<"*"<<(int)this->data[i + j + g*anchura]<<" = "<<sumatoriaTotal<<" "<<endl;
				}
			}	
		}
		sumatoriaTotal = sumatoriaTotal/((2*size+1)*(2*size+1));//se pasa la parte entera
		imagen.data[i] = sumatoriaTotal;
		//sumatoriaTotal = sumatoriaTotal / 255;
	}
	
	//Mat imagenFilter(altura, anchura,CV_8UC1, imagen.data);//Float,, C channel, 1 un canal
	cout<<"Aplicando el operador sobel"<<endl;
	imwrite("imagen_sobel_filter.png",imagen);
	imshow("Sobel Filter",imagen);
	waitKey(1950);
	
}

void ImageGS::variance(int norm,int size){
	Mat imagen(this->height, this -> width, CV_8UC1);
	imagen.data = this -> data;
	
	int altura = this->height;
	int anchura = this->width;
	
	for(int i = ((size+size*anchura)); i < (((anchura*altura)-(size+size*anchura))); i++){//Posiciones de la matriz Y que se deben recorrer
		int sumatoriaTotal = 0;
		int var = 0;
		int N = ((2*size+1)*(2*size+1));
	
		for(int j = -size; j <= size; j++){//ancho
			for(int g = -size; g <= size; g++){//alto
				
				sumatoriaTotal = sumatoriaTotal + (int)this->data[i + j + g*anchura];
				var = var + ((int)this->data[i + j + g*anchura])*((int)this->data[i + j + g*anchura]);
				
			
			}	
		}
		
		var = var/(N);
		sumatoriaTotal = sumatoriaTotal/N;
		sumatoriaTotal = sumatoriaTotal*sumatoriaTotal;	
		if(i<(size+size*anchura + 1)){
					cout<<var<<"-"<<sumatoriaTotal<<" = "<<(var-sumatoriaTotal)<<" "<<endl;
				}
		
		imagen.data[i] = 255- ((var-sumatoriaTotal)/norm);		
	}
	
	Mat imagenFilter(altura, anchura,CV_8UC1, imagen.data);//Float,, C channel, 1 un canal
	cout<<"Se realiza el calculo de la varianza"<<endl;
	imwrite("imagen_variance.png",imagen);
	imshow("Variance ",imagen);
	waitKey(1950);
	
}


void ImageGS::thershold(){
	//Mat imagen(this->height, this -> width, CV_8UC1);
	Mat imagen(this->height, this -> width, CV_8UC3);
	imagen.data = this -> data;
	
	int altura = this->height;
	int anchura = this->width;
	
	int NivelHisto = 256;
	int maxB2sigma = 0; 
	int B2sigma = 0;
	int threshold = 0;
	
	cout<<"Otsu Method: se realiza el calculo de los umbrales"<<endl;	
	
	int histData[NivelHisto]; 
	float alpha[NivelHisto];
	int miu[NivelHisto];
	
	for (int ptr = 0; ptr < NivelHisto; ptr ++) {
		histData[ptr] = 0;
		alpha[ptr] = 0;
		miu[ptr] = 0;
	}
	
	for (int ptr = 0; ptr < altura*anchura; ptr ++) {
		histData[(int)this->data[ptr]]++;
	}
	
    alpha[0] = histData[0]/(altura*anchura);
    
    for (int i = 1; i < NivelHisto; i ++) {
		alpha[i] = alpha[i-1] + histData[i];
		miu[i] = miu[i-1] + (i-1)*histData[i];
	}
    
	for (int t = 0; t<NivelHisto; t++) {
		int miut = miu[256];
		int alpha1 = alpha[t];
		int alpha2 = 1 - alpha[t];
		if (alpha1 != 0 && alpha2 != 0 ){
			
			int miu1 = miu[t]/alpha1;
			int miu2 = (miut - miu[t])/alpha2;
			B2sigma = abs(alpha1*(miu1-miut)^2 + alpha2*(miu2-miut)^2);
			if (B2sigma > maxB2sigma){
				maxB2sigma = B2sigma; 
				threshold = t;
				}
			}
	}
	
	for (int i = 0; i < 3*altura*anchura; i ++){
		
		if ((int)this->data[i]>threshold){
			imagen.data[i] = 255;
		}
		else{
			imagen.data[i] = 0;
			}
	}
	
	//Mat imagenFilter(altura, anchura,CV_8UC1, imagen.data);//Float,, C channel, 1 un canal
	imwrite("imagen_otsu_threshold.png",imagen);	
	imshow("threshold",imagen);
	waitKey(1950);
}
