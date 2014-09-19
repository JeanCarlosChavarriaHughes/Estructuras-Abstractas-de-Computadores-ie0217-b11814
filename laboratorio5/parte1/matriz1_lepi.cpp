#include "matriz1.hh"

C_matriz::C_matriz(int cantidad_filas, int cantidad_columnas){
	
	this->filas = cantidad_filas;
	this->columnas = cantidad_columnas;
	this->ptr_data = new float*[cantidad_filas];
	
    for (int i = 0; i < cantidad_filas; i++){
		ptr_data[i] = new float[cantidad_columnas]; 		
	}

	cout<<"Ejecutando el Constructor de C_matriz \n \n"<<endl;
}

C_matriz::~C_matriz(){
	for (int i = 0; i < this->filas; i++){
		delete ptr_data[i]; 
    }
    delete ptr_data;
	 
	cout<<"Ejecutando el Destructor de C_matriz \n \n"<<endl;
}

C_matriz::C_matriz(const C_matriz &Matriz){
	
	cout<<"Ejecutando el Copiador de C_matriz \n \n"<<endl;
	this->filas = Matriz.filas;
	this->columnas = Matriz.columnas;
	this->ptr_data = new float*[filas];
	
    for (int i = 0; i < filas; i++){
		ptr_data[i] = new float[columnas]; 		
	}
}

float C_matriz::get(int fila, int columna) const{
	return ptr_data[fila][columna];
}

void C_matriz::set(int fila, int columna, float dato){
	ptr_data[fila][columna]=dato;
}
