//principal1.cpp

#include "matriz1.hh"
#include <iostream>

/*****************************************/
void desplegar_matriz(int, int, const C_matriz &);
void llenar_matriz(int x, int y, C_matriz &);
/*****************************************/

using namespace std;
/*****************************************/
int main(void){
	
	const int n=2;
	const int m=3;
	cout<<"Probando el constructor y get():"<<endl;
	C_matriz A(n,m);
	desplegar_matriz(n,m,A); //use el miembro get()
	cout<<"Probando set():"<<endl;
	llenar_matriz(n,m,A); //use el miembro set()
	desplegar_matriz(n,m,A);
	cout<<"Probando el constructor con parámetros predeterminados:"<<endl;
	C_matriz B;
	desplegar_matriz(1,1,B);
	cout<<"Probando el constructor de copia"<<endl;
	C_matriz C(A);
	desplegar_matriz(n,m,C);
	return 0;
}

/****************************************/
void desplegar_matriz(int x, int y, const C_matriz &Matriz){	
	for(int i=0; i<x; i++){
		for(int j=0; j<y; j++){
			cout<<Matriz.get(i,j)<<"\t";
		}
		cout<<endl;
	}
}
/****************************************/
void llenar_matriz(int x, int y, C_matriz &Matriz){
	float elemento=0;
	for(int i=0; i<x; i++){
		for(int j=0; j<y; j++){
			Matriz.set(i,j,elemento);
			elemento++;
		}
	}
}
/****************************************/
