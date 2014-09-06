#include <iostream>
using namespace std;
#define SIZE 25.
double square(double mi_numero){
return(mi_numero*mi_numero);
}
double cube(double mi_numero){
return(mi_numero*mi_numero*mi_numero);
}
double power(double mi_numero, double(*calc_power) (double)){
return(calc_power(mi_numero));
}
int main(void){
// Prueba de punteros a funciones.
cout <<" \n \n Se pasa una funcion como parametro "<<endl;
cout <<"Se pasa la funcion square "<<power(SIZE,square)<<endl;
cout <<"Se pasa la funcion cube "<<power(SIZE,cube) <<endl;
}
