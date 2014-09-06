#include "circulo.hh"
MiCirculo::MiCirculo(void) : MiFigura("circulo"){
	//se llama el cosntructor de mi figura
	cout<<"Ejecutado el cosntructor de MiCirculo\n\n"<<endl; 
}
bool MiCirculo::area(void){
	cout<<"el area de un "<< nombre<<
	"se calcula como pi*r^2"<<endl;
	return true;
}
bool MiCirculo::perimetro(void){
	cout<<"el perimetro de un "<<nombre<<
	"se calcula como 2*pi*r"<<endl;
	return true;
}
