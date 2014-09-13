#include "mystack.hh"
#include <cstdlib>

MyStack::MyStack(void){	
	//Se llama el constructor de la clase
	cout << "Ejecutado el Constructor de MyStack\n\n" << endl;
	first = NULL;
}

MyStack::~MyStack(void){	
	//Se llama el desconstructor de la clase
	cout << "Ejecutado el desconstructor de MyStack\n\n" << endl;
}

bool MyStack::pushBack(int data){//encolar
	mynode *aux_metiendo = new mynode;
	aux_metiendo->data = data;
	aux_metiendo->next = first;
	first = aux_metiendo;
	cout << "Se rellenó con " << data << " first: " << first<< endl;
	return true;
}

int MyStack::popFront(void){//desencolar
	mynode *aux_metiendo = new mynode;
	aux_metiendo = first;
	int elemento = aux_metiendo->data;
	first = aux_metiendo->next;
	delete (aux_metiendo);
	return elemento;
}

bool MyStack::isEmpty(void){
	if(first==NULL){return true;}
		else{return false;}
}
