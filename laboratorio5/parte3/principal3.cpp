//−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−/
// principal3.cpp
//−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−−/
#include "matriz3.h"
#include <iostream>
/**********************************************************************/
void llenar_matriz(int x , int y , C_matriz &);
/**********************************************************************/
using namespace std ;
/**********************************************************************/
int main() {
	const int n=2;
	const int m=3;
	cout<<" Probando los operadores sobrecargados = , + and *: "<<endl;
	cout<<"A: "<<endl;
	C_matriz A(n,m);
	llenar_matriz (n,m,A);
	A.desplegar();
	cout<<"B: "<<endl ;
	C_matriz B(A);
	cout<<"B=3*A"<<endl ;
	B= 3*A;
	B.desplegar();
	cout<<"A: "<<endl ;
	A.desplegar();
	cout<<"C: "<<endl ;
	cout<<"C=B-A"<<endl ;
	C_matriz C=B-A;
	C.desplegar();
	return 0;
}
/**********************************************************************/
void llenar_matriz(int x , int y , C_matriz &Matriz) {
	float elemento =0;
	for (int i =0; i <x ; i++){
		for(int j =0; j <y ; j++) {
			Matriz.set(i,j,elemento);
			elemento ++;
		}
	}
}
