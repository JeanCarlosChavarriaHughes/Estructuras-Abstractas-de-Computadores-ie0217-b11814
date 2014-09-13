#include "cuadrado.hh"

MiCuadrado::MiCuadrado(void) : MiFigura("cuadrado"){
	
	//Se llama el constructor de la figura
	cout << "Ejecutado el Constructor de MiCuadrado\n\n" << endl;
}

bool MiCuadrado::area(void){
	
	cout << "El area de un " << nombre << " se calcula como b*h" << endl;
	return true;
}

bool MiCuadrado::perimetro(void){
	
	cout<< "" << nombre << " se calcula como 4*l" << endl;
	return true;	
}
