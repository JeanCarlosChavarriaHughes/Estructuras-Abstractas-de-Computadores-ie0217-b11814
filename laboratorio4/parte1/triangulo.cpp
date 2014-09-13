//! Programa triangulo.cpp
/*!
* Este programa se encarga de definir los métodos que se
* declararon en la libreria correspondiente "triangulo.hh"
*/

#include "triangulo.hh"

MiTriangulo::MiTriangulo(void) : MiFigura("triangulo"){
//! Contructos de "MiTriangulo"
/*!
* Este es el contructor del programa y no recibe ningún parámetro.
*/
	//Se llama el constructor de la figura
	cout << "Ejecutado el Constructor de MiTriangulo\n\n" << endl;
}

bool MiTriangulo::area(void){
//! método area
/*!
* Este método se encarga de mostrar en pantalla la fórmula para
* para calcular el area de un triangulo.
*/	
	cout << "El area de un " << nombre << " se calcula como bxh/2" << endl;
	return true;
}

bool MiTriangulo::perimetro(void){
//! método perímetro
/*!
* Este método se encarga de mostrar en pantalla la fórmula para
* para calcular el perímetro de un triangulo.
*/	
	cout<< "" << nombre << " se calcula como l1+l2+l3" << endl;
	return true;
}
bool MiTriangulo::girarHorizontal(void){
//! método girarHorizontal
/*!
* Este método se encarga de mostrar en pantalla la frase "se giró horizontalmente".
*/	
	cout << "Se giró un " << nombre << " horizontalmente" << endl;
	return true;
}

bool MiTriangulo::girarVertical(void){
//! método girarVertical
/*!
* Este método se encarga de mostrar en pantalla la frase "se giró verticalmente".
*/	
	cout << "Se giró un " << nombre << " verticalmente" << endl;
	return true;	
}
