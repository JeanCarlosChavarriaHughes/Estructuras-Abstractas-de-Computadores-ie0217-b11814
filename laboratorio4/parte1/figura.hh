#include <string>
#include <iostream>

using namespace std ;
class MiFigura {
protected :
	string nombre ;
public :
	MiFigura(string miNombre ) ;
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
