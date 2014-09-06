//! Tercer programa del tercer laboratorio. Punteros a funciones
/*!
* Esta practica busca conocer la diferencia entre un puntero y un arreglo,
* ademas, conocer la capacidad de asignar arreglos a punteros.
*/

#include <iostream>
using namespace std;
#define SIZE 25
int square(int mi_numero){
return(mi_numero*mi_numero);
//! Funcion square(int mi_numero)
/*!
* esta funcion recibe un entero y retorna el cuadrado de dicho entero. 
*/
}
int cube(int mi_numero){
return(mi_numero*mi_numero*mi_numero);
//! Funcion cube(int mi_numero)
/*!
* Esta funcion recibe un entero y retorna el cubo de dicho entero.
*/
}
int power(int mi_numero, int(*calc_power) (int)){
return(calc_power(mi_numero));
//! Funcion power(int mi_numero, int(*calc_power) (int))
/*!
*esta funcion es muy importante ya que se encarga basicamente de realizar el llamado
*  a las otras funciones, por lo tanto se puede observar que recibe el entero que se
* va a manipular, pero ademas posee otro argumento que es un puntero, el  cual es el 
*el puntero a la funcion, que por el momento no se sabe cual es, se define en el main.
*/
}
int main(void){
//! Funcion main(void)
/*!
*El main de este programa comienza por mostrar en pantalla lo que esta sucendiento 
*para que el usuario tenga una idea de lo que esta procesandose.
* Ademas, realiza el llamado a la funcion power, la cual posee dos argumentos, como
*se vio anteriormente, uno es el entero que se desea manipular y el otro es 
* la funcion que se desea realizar.
*/
cout <<" \n \n Se pasa una funcion como parametro "<<endl;
cout <<"Se pasa la funcion square "<<power(SIZE,square)<<endl;
cout <<"Se pasa la funcion cube "<<power(SIZE,cube) <<endl;
}

//!Comentarios interesantes
/*!
*¿Qué hace la directiva define SIZE 25?. ¿Qué ventajes y desventajas tiene el uso de macros? ¿Cómo se
*obtiene un resultado equivalente, pero esta vez mediante C++?
*/
