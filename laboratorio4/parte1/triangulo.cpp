#include "triangulo.hh"

MiTriangulo::MiTriangulo(void) : MiFigura("triangulo"){
	
	//Se llama el constructor de la figura
	cout << "Ejecutado el Constructor de MiTriangulo\n\n" << endl;
}

bool MiTriangulo::area(void){
	
	cout << "El area de un " << nombre << " se calcula como bxh/2" << endl;
	return true;
}

bool MiTriangulo::perimetro(void){
	
	cout<< "" << nombre << " se calcula como l1+l2+l3" << endl;
	return true;
}
bool MiTriangulo::girarHorizontal(void){
	
	cout << "Se giró un " << nombre << " horizontalmente" << endl;
	return true;
}

bool MiTriangulo::girarVertical(void){
	
	cout << "Se giró un " << nombre << " verticalmente" << endl;
	return true;	
}
