#include <iostream>
using namespace std;
#define SIZE 25.
float square(float mi_numero){
return(mi_numero*mi_numero);
}
float cube(float mi_numero){
return(mi_numero*mi_numero*mi_numero);
}
float power(float mi_numero, float(*calc_power) (float)){
return(calc_power(mi_numero));
}
int main(void){
// Prueba de punteros a funciones.
cout <<" \n \n Se pasa una funcion como parametro "<<endl;
cout <<"Se pasa la funcion square "<<power(SIZE,square)<<endl;
cout <<"Se pasa la funcion cube "<<power(SIZE,cube) <<endl;
}
