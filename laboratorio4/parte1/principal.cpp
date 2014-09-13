#include "circulo.hh"
#include "triangulo.hh"
#include "cuadrado.hh"

int main(){
	MiCirculo mi_circulo; // Se crea un objeto
	MiTriangulo mi_triangulo; // Se crea un objeto
	MiCuadrado mi_cuadrado; // Se crea un objeto

	MiFigura *mi_figura_circulo = &mi_circulo ; // Se de fine un puntero a un objeto
	MiFigura *mi_figura_triangulo = &mi_triangulo ; // Se de fine un puntero a un objeto
	MiFigura *mi_figura_cuadrado = &mi_cuadrado ; // Se de fine un puntero a un objeto

	cout << " ∗∗∗∗∗∗∗∗∗∗∗∗∗∗∗∗ Aqui se maneja todo como un puntero base ∗∗∗∗∗∗∗∗∗∗∗∗∗∗∗∗" << endl ;

	mi_figura_cuadrado-> mover();
	mi_figura_cuadrado->	borrar();
	mi_figura_cuadrado-> area();

	mi_figura_triangulo-> mover();
	mi_figura_triangulo->	borrar();
	mi_figura_triangulo-> area();

	mi_figura_circulo-> mover();
	mi_figura_circulo->	borrar();
	mi_figura_circulo-> area();

	cout << "\n∗∗∗∗∗∗∗∗∗∗∗∗∗∗∗∗ Aqui se maneja directamente el objeto∗∗∗∗∗∗∗∗∗∗∗∗∗∗∗∗ "<< endl ;

	mi_circulo.mover();
	mi_circulo.borrar();
	mi_circulo.area();

	mi_triangulo.mover();
	mi_triangulo.borrar();
	mi_triangulo.area();
	mi_triangulo.girarHorizontal();
	mi_triangulo.girarVertical();

	mi_cuadrado.mover();
	mi_cuadrado.borrar();
	mi_cuadrado.area();
}
