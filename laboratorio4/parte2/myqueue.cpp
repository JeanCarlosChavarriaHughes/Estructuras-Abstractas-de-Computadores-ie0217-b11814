#include "myqueue.hh"
#include <cstdlib>

MyQueue::MyQueue(void){	
	//Se llama el constructor de la clase
	cout << "Ejecutado el Constructor de MyQueue\n\n" << endl;
	first = NULL;
	last = NULL;
}

MyQueue::~MyQueue(void){	
	//Se llama el desconstructor de la clase
	cout << "Ejecutado el desconstructor de MyQueue\n\n" << endl;
}

bool MyQueue::pushBack(int data){//encolar
	mynode *aux_metiendo = new mynode;
	aux_metiendo->data = data;
	aux_metiendo->next = first;
	first = aux_metiendo;
	if(first==NULL){
		last = aux_metiendo;
	}
	return true;
}

int MyQueue::popFront(void){//desencolar
	mynode *aux_metiendo = new mynode;
	aux_metiendo = last;
	int elemento = aux_metiendo->data;
	first = aux_metiendo->next;
	if(first == NULL){
		last=NULL;
	}
	delete (aux_metiendo);
	return elemento;
}

bool MyQueue::isEmpty(void){
	if(first==NULL && last==NULL){return true;}
		else{return false;}
}
