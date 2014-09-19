///---------------------------------------------------------------------/
/// Comentarios
///---------------------------------------------------------------------/

#ifndef MATRIZ_H
#define MATRIZ_H
/**********************************************************************/
#include <iostream>
#include <string>
/**********************************************************************/
using namespace std;
/**********************************************************************/
class C_matriz{
	friend ostream &operator<<(ostream &,const C_matriz &);
	///Similar a desplegar()
	friend C_matriz operator *(const C_matriz &,const float &);
	/// multiplica una matriz por un flotante
	friend C_matriz operator *(const float &,const C_matriz &) ;
	/// multiplica una matriz por un flotante
	public:
	
	C_matriz(int =1 , int = 1);
	C_matriz(const C_matriz &);
	~C_matriz();
	float get(int fila, int columna) const;
	void set(int fila, int columna , float dato);
	C_matriz &operator = (const C_matriz &) ;
//	float operator() (int , int);
	float &operator()(int, int);
	void desplegar (void);
	C_matriz operator +(const C_matriz &) ;
	C_matriz operator -(const C_matriz &) ;
	C_matriz operator*(const float &);
		//multiplica una matriz por un flotante
	// resta dos matrices
	private:
	int filas;
	int columnas;
	float **puntero_dato;
};
/**********************************************************************/

#endif
