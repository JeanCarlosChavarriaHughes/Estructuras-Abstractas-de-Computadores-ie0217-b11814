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
	if(last==NULL){
		first = aux_metiendo;
	}
	aux_metiendo->next = NULL;
	if(last!=NULL){
		last->next = aux_metiendo;
	}
	last = aux_metiendo;
	cout<<"Se completo con " <<data<<" last: "<<last<<endl;
	return true;
}

int MyQueue::popFront(void){//desencolar
	mynode *aux_metiendo = new mynode;
	aux_metiendo = first;
	int elemento = aux_metiendo->data;
	first = aux_metiendo->next;
	delete (aux_metiendo);
	return elemento;
}

bool MyQueue::isEmpty(void){
	if(first==NULL && last==NULL){return true;}
		else{return false;}
}
