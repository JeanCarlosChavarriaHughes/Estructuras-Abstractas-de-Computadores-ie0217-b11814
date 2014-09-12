#include "circulo.hh"

MiCirculo::MiCirculo(void) : MiFigura("circulo"){
	
	//Se llama el constructor de la figura
	cout << "Ejecutado el Constructor de MiCirculo\n\n" << endl;
}

bool MiCirculo::area(void){
	
	cout << "El area de un " << nombre << " se calcula como pi*r^2" << endl;
	return true;
}

bool MiCirculo::perimetro(void){
	
	cout<< "" << nombre << " se calcula como 2*pi*r" << endl;
	return true;	
}
