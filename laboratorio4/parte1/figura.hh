//! Programa figura.hh
/*!
* Este programa contiene las librerias de la clase "MiFigura"
* ademas, se puede observar en el código la presencia de un 
* "ifndef" el cual se encarga de prevenir problemas que pueden 
* aparecer cuando se ejecutan diferentes programas que quieren
* crear múltiples veces la clase "CLASE_FIGURA"
*/

#include <string>
#include <iostream>

#ifndef CLASE_FIGURA
	#define CLASE_FIGURA

using namespace std ;
class MiFigura {
protected :
	string nombre ;
public :
	MiFigura(string miNombre) ;
	virtual ~MiFigura(void) ;
	bool dibujar(void) ;
	virtual bool mover(void) ;
	bool borrar(void) ;
	virtual bool area(void){
		cout << "Esto calculará el área de la figura "<< endl ;
		return true ;
	}
	virtual bool perimetro(void) {
		cout << "Esto calculará el perímetro de la figura " << endl ;
	return true ;
	}
};
#endif
