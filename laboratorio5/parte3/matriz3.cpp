#include "matriz3.h"
#include <cstdlib>

using namespace std;

C_matriz::C_matriz(int fila, int columna){
	this-> filas=fila;
	this-> columnas=columna;
	this-> puntero_dato = new float*[fila];
//	cout<<"Se ha creado un nuevo objeto tipo 'matriz1' \n \n"<<endl;
	for(int i = 0;i<fila;i++){
		puntero_dato[i] = new float[columna];
	}
}

C_matriz::C_matriz(const C_matriz &matris){
	
	this->filas = matris.filas;
	this->columnas = matris.columnas;
	this->puntero_dato = new float*[filas];
//	cout<<"Se ha copiado el copiador de C_matriz \n \n"<<endl;

	for(int i = 0;i<filas;i++){
		puntero_dato[i] = new float[columnas];
	}

	for(int i = 0; i<filas; i++){
		for(int j = 0; j< columnas; j++){
			puntero_dato[i][j] = matris.puntero_dato[i][j];
		}
	}
}

C_matriz::~C_matriz(){
	for(int i = 0; i<this->filas;i++){
		delete puntero_dato[i];
	}
	delete puntero_dato;
	cout<<"Se ha destruido un objeto C_matriz \n \n"<<endl;
}

float C_matriz::get(int fila, int columna) const{
	return puntero_dato[fila][columna];

	//Esto es un comentario.
	//La funcion 'get()' se encarga de retornar un
	//elemento de la matriz 'C_matriz' como un flotante.
}

void C_matriz::set(int fila, int columna, float nuevo_dato){
	puntero_dato[fila][columna]=nuevo_dato;
	//Esto es un comentario.
	//La funcion 'set()' se encarga de asignar un
	//elemento a la matriz 'C_matriz'.
}

void C_matriz::desplegar(){
	int x = this->filas;
	int y = this->columnas;

	for(int i=0; i<x; i++){
		for(int j=0; j<y; j++){
			cout<<this->get(i,j)<<"\t";
		}
		cout<<endl;
	}
}

float& C_matriz::operator()(int fila, int columna){
	return (puntero_dato[fila][columna]);
}
		
C_matriz& C_matriz::operator=(const C_matriz &Matriz){
	
	cout<<"operator= \n \n"<<endl;
	this->filas = Matriz.filas;
	this->columnas = Matriz.columnas;
	//this->puntero_dato = new float*[Matriz.filas];
	
    //for (int i = 0; i < Matriz.filas; i++){
	//	puntero_dato[i] = new float[Matriz.columnas]; 		
	//}
	
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){
			this->puntero_dato[i][j] = Matriz.puntero_dato[i][j];
			//????//Preguntar porque este this no es necesario?
		}
	}
	return *this;
}

C_matriz C_matriz::operator+(const C_matriz &Matriz){
	
	if (filas != Matriz.filas || columnas != Matriz.columnas){
		cout<< "Operacion invalida, dimensiones distintas"<<endl;
		return (*this);
	}
	C_matriz MatrizNueva(filas,columnas);
	cout<< "Addicion de matrices"<<endl;
	for (int i=0; i<filas; i++){
		for (int j=0; j<columnas; j++){
			MatrizNueva.puntero_dato[i][j] = puntero_dato[i][j] + Matriz.puntero_dato[i][j];
		}
	}
	return MatrizNueva;
}


C_matriz C_matriz::operator-(const C_matriz &Matriz){
	
	if (filas != Matriz.filas || columnas != Matriz.columnas){
		cout<< "Operacion invalida, dimensiones distintas"<<endl;
		return (*this);
	}
	C_matriz MatrizNueva(filas,columnas);
	cout<< "Sustraccion de matrices"<<endl;
	for (int i=0; i<filas; i++){
		for (int j=0; j<columnas; j++){
			MatrizNueva.puntero_dato[i][j] = puntero_dato[i][j] - Matriz.puntero_dato[i][j];
		}
	}
	return MatrizNueva;
}


ostream & operator <<(ostream &Output ,const C_matriz &Matriz) {
for (int i=0; i<Matriz.filas; i++) {
	for (int j=0; j<Matriz.columnas; j++) {
		Output<<Matriz.get(i,j)<<"\t";	
	}
	cout<<endl;
}
return Output;
}

C_matriz C_matriz::operator*(const float &Matriz){
	C_matriz MatrizNueva(filas,columnas);
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			MatrizNueva.puntero_dato[i][j] = puntero_dato[i][j]*Matriz;
		}
	}
	return MatrizNueva;
}

C_matriz operator*(const float &c,const C_matriz &Matriz){ 
C_matriz multiplicado(Matriz); 
	for (int i=0; i<Matriz.filas; ++i) { 
		for (int j=0; j<Matriz.columnas; ++j) { 
			multiplicado.puntero_dato[i][j] = c*Matriz.puntero_dato[i][j]; 
		} 
	} 
	return multiplicado; 
}