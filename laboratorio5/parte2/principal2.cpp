#include "matriz2.h"
#include <iostream>
/*******************************/
void llenar_matriz(int x, int y, C_matriz &);
/*******************************/
using namespace std;
/*******************************/
int main(void){
	const int n=2;
	const int m=3;
	cout<<"Probando los operadores sobrecargados =, + and *:"<<endl;
	cout<<"A:"<<endl;
	C_matriz A(n,m);
	llenar_matriz(n,m,A);
	A.desplegar();
	C_matriz B(A);
	cout<<"B:"<<endl;
	B=A*2;
	B.desplegar();
	C_matriz C(n,m);
	cout<<"C=A:"<<endl;
	C=A;
	C.desplegar();
	cout<<"C=A+B:"<<endl;
	C=A+B;
	C.desplegar();
	cout<<C(0,1)<<"\n "<<C(1,2)<<endl;
	cout<<"Recuerde que no puede llamar dos operadores sobrecargados al mismo tiempo"<<endl;
	return 0;
}
/***************************/
void llenar_matriz(int x, int y, C_matriz &Matriz){
	float objetivo=0;
	for(int i=0; i<x; i++){
		for(int j=0;j<y;j++){
			Matriz.set(i,j,objetivo);
			objetivo++;
		}
	}
}
/**************************/