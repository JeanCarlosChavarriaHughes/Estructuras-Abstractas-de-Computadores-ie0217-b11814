#include "matriz1.hh"

C_matriz::C_matriz(int fila, int columna){
	this-> filas=fila;
	this-> columnas=columna;
	this-> puntero_dato = new float*[fila];
	cout<<"Se ha creado un nuevo objeto tipo 'matriz1' \n \n"<<endl;
	for(int i = 0;i<fila;i++){
		puntero_dato[i] = new float[columna];
	}
}

C_matriz::C_matriz(const C_matriz &matris){
	
	this->filas = matris.filas;
	this->columnas = matris.columnas;
	this->puntero_dato = new float*[filas];
	cout<<"Se ha copiado el copiador de C_matriz \n \n"<<endl;

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
