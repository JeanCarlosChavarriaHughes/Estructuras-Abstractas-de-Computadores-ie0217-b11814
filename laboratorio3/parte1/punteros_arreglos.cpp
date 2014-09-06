//! Segundo programa del tercer laboratorio. Punteros a arreglos.
/*!
* Esta practica busca conocer la diferencia entre un puntero y un arreglo,
* ademas, conocer la capacidad de asignar arreglos a punteros.
*/

#include <iostream>
using namespace std;
void cambiar_arreglo(int mi_arreglo[]){
//! funcion cambiar_arreglo(int mi_arreglo[])
/*!
*Esta funcion recibe un arreglo de enteros como unico argumento 
* y se encarga de multiplicar el contenido de los 10 elementos internos por 10.
*/
	for(int i=0;i<10;i++){
		// Estas dos líneas realizan la misma función
		mi_arreglo[i] = mi_arreglo[i]*10;
		//mi_arreglo[i] ∗=10;
		}
	}

int main(void){
//! El main del programa
/*!
*Como es costumbre, el main es un int
*/
	int *ptr_arreglo;
	int arreglo[]={9,8,7,6,5,4,3,2,1,0};
	//Arreglos vs punteros
	cout<< "\n\n\n El arreglo contiene los datos "<<endl ;
	for(int i=0; i<10; i++){
		cout << i <<" −) "<< arreglo[i]<<endl;
	}
	cout << " \n\n\n El arreglo, despues del a funcion cambiar_arreglo , contiene los datos "<<endl;
//! Metodo main de punteros_arreglos.cpp
/*!
*el main de este programa se encarga de inicializar la varialbe 'arreglo[]', 
* ademas, realiza el llamado de las funciones 'cambiar_arreglo(int arreglo)' 
* y llamar 'cambiar_arreglo(ptr_arreglo)'
*/
	cambiar_arreglo(arreglo);
	for(int i=0; i<10; i++){
		cout << i <<" −) "<< arreglo[i]<<endl;
	}
	cout <<" \n\n\n";
	// Y que tal con un puntero
	ptr_arreglo=arreglo;
	//arreglo=ptr_arreglo;
	//arreglo = ptr_arreglo; // Esto se ocupará más adelante
	cambiar_arreglo(ptr_arreglo);
	for (int i=0; i<10; i++){
		cout << i <<" −) "<< ptr_arreglo[i]<< endl;
	}
	cout <<" \n \n \n";
	}

//!Preguntas interesantes
/*!
* ¿Cuál es la diferencia entre un puntero y un arreglo, en el programa se vio que un arreglo se puede asignar
* a un puntero, descomente la línea que hace lo opuesto y compile de nuevo. ¿Qué sucede?
*/
