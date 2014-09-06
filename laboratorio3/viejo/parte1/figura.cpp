#include"figura.hh"
MiFigura::MiFigura(string miNombre){
	this->nombre = miNombre;//
	cout<<"Ejecuntando el constructor de MiFigura\n\n"<<endl;
}
MiFigura::~MiFigura(void){
	cout<<"El destructor de " << nombre <<" dice adios "<<endl;	
}
bool MiFigura::dibujar(){
	cout<<"dibujando"<<nombre<<endl;
	return true;
}
bool MiFigura::mover(){
	cout<<"moviendo"<< nombre<<endl;
	return true;
}
bool MiFigura::borrar(){
	cout<<"borrando "<< nombre<<endl;
	return true;
}
