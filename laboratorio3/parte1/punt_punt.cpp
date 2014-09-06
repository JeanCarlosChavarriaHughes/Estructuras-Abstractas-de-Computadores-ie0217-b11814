//! Cuarto programa del tercer laboratorio. Punteros a punteros.
/*!
* Esta practica busca conocer la diferencia entre un puntero y un arreglo,
* ademas, conocer la capacidad de asignar arreglos a punteros.
*/

#include <iostream>
using namespace std ;
#define SIZE 25
void dar_memoria_puntero (int *mi_arreglo) {
	mi_arreglo =  new int[SIZE];
	for (int i =0; i <SIZE ; i ++) {
	mi_arreglo[i]= i ;
	}
	cout<<"Segun la funcion dar_memoria_puntero el arreglo contiene : "<<endl;
	for (int i =0; i<SIZE ; i++) {
		cout<<i <<"−) "<<mi_arreglo [ i ]<< endl;
	}
//! funcion dar_memoria_puntero (int *mi_arreglo)
/*!
*Esta funcion recibe un puntero a un entero y lo completa con valores consecutivos.
*/
}

void dar_memoria_doble_puntero ( int **mi_arreglo ) {
	(*mi_arreglo) = new int[SIZE];
	for (int i=0; i<SIZE ; i ++) {
	(*mi_arreglo)[i]= i;
	}
	cout<< "Segun la funcion dar_memoria_doble_puntero el arreglo contiene "<<endl;
	for (int i=0; i<SIZE ; i ++) {
	cout<<i <<"−) " <<(*mi_arreglo) [i]<< endl ;
	}
//! funcion dar_memoria_puntero (int *mi_arreglo)
/*!
*Esta funcion recibe un puntero a un puntero y lo completa con valores consecutivos.
* Como se va a observar mas adelante, esto es importantisimo porque de otra manera
* el valor dado no se modificaria.
*/

}
int main (void) {
	int *ptr_arreglo;
//!Funcion Main.
/*!
*En este main se llaman a las dos funciones anteriores y se muestra en pantalla lo que
*sucede, esto para demostrar la importancia de los punteros dobles.
*/
	dar_memoria_puntero (ptr_arreglo);
	cout <<" \n \n \n Despues de l a funcion dar_memoria_puntero el arreglo contiene "<<endl ;
	for (int i =0; i<SIZE ; i++) {
	cout << i <<" −) "<<&ptr_arreglo[i]<<endl;
	}
	dar_memoria_doble_puntero(&ptr_arreglo) ;
	cout <<" \n Despues de l a funcion dar_memoria_doble_puntero el arreglo contiene"<<endl ;
	for(int i =0; i<SIZE ; i++) {
	cout << i <<" −) "<< ptr_arreglo[i] << endl ;
	}

}

//!Comentario interesantes.
/*!
*¿Porqué los cambios hechos a un puntero simple, no se mantienen, al regresar la función?
*/
