//! figura.cpp
/*!
* Este programa contiene la deficion de los métodos 
* declarados en la clase figura.
*/
#include "figura.hh"

MiFigura::MiFigura(string miNombre) {
//! Constructor de Mifigura
/*!
* Este constructor recibe como parametro un "string", que 
* cumple la función de nombre o identificador al nuevo 
* nuevo objeto creado.
*/
	this->nombre = miNombre;
	cout << "Ejecutando el Constructor de MiFigura \n \n" << endl ;
}

MiFigura::~MiFigura(void){
//! Desonstructor de Mifigura
/*!
* Este desconstructor no recibe nungún parametro y 
*simplemente desplega en la pantalla el aviso de que
*ha eliminado el objeto
*/
	cout <<"El Destructor de " << nombre << " dice adios" <<endl ;
}

bool MiFigura::dibujar(){
//! método dibujar
/*!
* Este método se encarga de mostrar en pantalla la palabra "dibujando"
*/
	cout<< " dibujando " << nombre << endl ;
	return true;
}
bool MiFigura::mover(){
//! método mover
/*!
* Este método se encarga de mostrar en pantalla la palabra "moviendo"
*/
	cout<< "moviendo " << nombre << endl ;
	return true;
}
bool MiFigura::borrar(){
//! método borrar
/*!
* Este método se encarga de mostrar en pantalla la palabra "borrando"
*/
	cout<< "borrando " << nombre << endl ;
	return true;
}
