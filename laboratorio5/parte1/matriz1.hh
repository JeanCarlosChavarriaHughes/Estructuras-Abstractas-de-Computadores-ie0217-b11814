#include <string>
#include <iostream>

#ifndef MATRIZ_H
#define MATRIZ_H

using namespace std;

class C_matriz{
	
	public:
		C_matriz(int=1, int=1);
		//Parámetros por defecto: fila, columna
		C_matriz(const C_matriz &);
		//Constructor de copia
		~C_matriz();
		float get(int fila, int columna) const;
		//Retorna un elemento de la matriz
		void set(int fila, int columna, float nuevo_dato);
		//Graba un elemento en una posición de la matriz
	
	private:
		int filas;
		int columnas;
		float **puntero_dato;
};

#endif
