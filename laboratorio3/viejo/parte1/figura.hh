#include<string>
#include<iostream>

using namespace std;

class MiFigura{

protected:
		string nombre;
public:
	MiFigura(string miNombre);
	virtual ~MiFigura(void);
	bool dibujar(void);
	bool mover(void);
	bool borrar(void);
	virtual bool area(void){
		cout<<"Estos calculara el area de la figura"<<endl;
		return true;
	}
	virtual bool perimetro(void){
		cout<<"Esto calculara el perimetro de la figura"<<endl;
		return true;
	}
};
//Recuerde siempre finalizar la clase con ';'
