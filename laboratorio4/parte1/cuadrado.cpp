//! Programa Cuadrado.cpp
/*!
* Este programa se encarga de definir los métodos
* declarados en la libreria correspondiente "cuadrado.hh".
*/	
#include "cuadrado.hh"

MiCuadrado::MiCuadrado(void) : MiFigura("cuadrado"){
//! Constructor
/*!
* Este es el constructor del programa y no recibe ningún parámetro.
*/	
	//Se llama el constructor de la figura
	cout << "Ejecutado el Constructor de MiCuadrado\n\n" << endl;
}

bool MiCuadrado::area(void){
//! método area
/*!
* Este método se encarga de mostrar en pantalla la fórmula 
* para calcular el área de un cuadrado.
*/	
	cout << "El area de un " << nombre << " se calcula como b*h" << endl;
	return true;
}

bool MiCuadrado::perimetro(void){
//! método perímetro
/*!
* Este método se encarga de mostrar en pantalla la fórmula 
* para calcular el perímetro de un cuadrado.
*/	
	cout<< "" << nombre << " se calcula como 4*l" << endl;
	return true;	
}
