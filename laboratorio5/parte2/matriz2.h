//--------------------------------------------
//matriz2.h
//--------------------------------------------
#include <iostream>
#include <string>

#ifndef MATRIZ_H
#define MATRIZ_H
/*********************************************/
class C_matriz{
	public:
		C_matriz(int = 1, int = 1 );
		//parametros por defecto, estos son fila,
		//columna.
		C_matriz(const C_matriz &);
		//constructor de copia
		~C_matriz();
		float get(int fila, int columna) const;
		//retorna un elemento de la matriz
		void set(int fila, int columna, float dato);
		//graba un elemento de una posicion de la matriz
		C_matriz &operator=(const C_matriz &);
		//Operador de asignacion
		float &operator()(int, int);
		//Operador para seleccionar un elemento 
		//en la matriz, similar a get.
		void desplegar(void);
		//desplegar toda la matriz, por filas y columnas
		C_matriz operator+(const C_matriz &);
		//suma dos matrices
		C_matriz operator*(const float &);
		//multiplica una matriz por un flotante
	private:
		int filas;
		int columnas;
		float **puntero_dato;
};
#endif