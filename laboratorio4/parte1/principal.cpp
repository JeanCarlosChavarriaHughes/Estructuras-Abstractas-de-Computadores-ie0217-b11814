#include "circulo.hh"

int main(){
	MiCirculo mi_circulo; // Se crea un objeto
	MiFigura *mi_figura = &mi_circulo ; // Se de fine un puntero a un objeto
	cout << " ∗∗∗∗∗∗∗∗∗∗∗∗∗∗∗∗ Aqui se maneja todo como un puntero base ∗∗∗∗∗∗∗∗∗∗∗∗∗∗∗∗" << endl ;
	mi_figura-> mover();
	mi_figura->	borrar();
	mi_figura->area();
	cout << "\n∗∗∗∗∗∗∗∗∗∗∗∗∗∗∗∗ Aqui se maneja directamente el objeto∗∗∗∗∗∗∗∗∗∗∗∗∗∗∗∗ "<< endl ;
	mi_circulo.mover();
	mi_circulo.borrar();
	mi_circulo.area();
}
