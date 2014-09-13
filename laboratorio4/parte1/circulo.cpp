//! Programa circulo.cpp
/*!
* Este programa se encarga de definir los métodos
* declarados en la libreria correspondiente "circulo.hh".
*/	

#include "circulo.hh"

MiCirculo::MiCirculo(void) : MiFigura("circulo"){
//! Constructor
/*!
* Este es el constructor del programa y no recibe ningún parámetro.
*/		
	//Se llama el constructor de la figura
	cout << "Ejecutado el Constructor de MiCirculo\n\n" << endl;
}

bool MiCirculo::area(void){
//! método area
/*!
* Este método se encarga de mostrar en pantalla la fórmula 
* para calcular el área de un circulo.
*/	
	cout << "El area de un " << nombre << " se calcula como pi*r^2" << endl;
	return true;
}

bool MiCirculo::perimetro(void){
//! método perímetro
/*!
* Este método se encarga de mostrar en pantalla la fórmula 
* para calcular el perímetro de un circulo.
*/		
	cout<< "" << nombre << " se calcula como 2*pi*r" << endl;
	return true;	
}
