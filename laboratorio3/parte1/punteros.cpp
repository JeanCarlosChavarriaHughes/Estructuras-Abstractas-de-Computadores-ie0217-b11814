//! Primer programa del tercer laboratorio.
/*!
* Esta practica busca conocer la diferencia entre el paso por valor, el paso por referencia y el paso por punteros a funciones.
*/
#include <iostream>
using namespace std;

void triple(int n){
//! funcion triple(int n)
/*!
*Funcion que recibe el parametro como un valor..
*/
	n = 3*n;
	cout <<"Según la función void triple(int n) el valor del número es: "<< n <<endl;
}
 
void triple(int *ptr_n){
//! funcion triple(int *ptr_n)
/*!
*Funcion que recibe el parametro como un puntero.
*/	
	*ptr_n = 3* *ptr_n;
	cout << "Según la función void triple(int *ptr_n) el valor de número es" <<*ptr_n <<endl;
	
}

int main(void){
//! main del programa
/*!
*Como es costumbre, el main es un int
*/
	int numero = 3, *ptr_num;
//! Paso de parámetros por valor
/*!
*Para realizar el llamado de la funcion por medio del valor directamente, 
* se realiza el comando: triple(numero).
*/     

	cout<<"El valor de la variable numero antes de la funcion void triple(int) es: "<<numero<<endl;
	triple(numero);
	cout<<"El valor de la variable número después de la función void triple(int) es: "<<numero<<endl;
//! Paso de parámetros por referencia
/*!
*Para realizar el llamado de la funcion por medio de la referencia directamente, 
*se realiza el comando: triple(int *ptr_n) mediante un &numero
*/     
	
	cout<<"\n El valor de la variable número antes de la función void triple(*int) es: "<<numero<<endl;
	triple(&numero);
	cout<<"El valor de la variable número después de la función void triple(*int) es: "<<numero<<endl;
//!Paso de parámetros por punteros
/*!
*Para realizar el llamado de la funcion por medio del puntero directamente, 
*se realiza el comando: triple(int *ptr_n) mediante un ptr_num=&numero.
*/
	
	ptr_num=&numero;
	cout<<"\nEl valor de la variable numero antes de la funcion void triple(*int) es: "<<*ptr_num<<endl;
	triple(ptr_num);
	cout<<"El valor de la variable número después de la función void triple(*int) es: "<<*ptr_num<<endl;
}
