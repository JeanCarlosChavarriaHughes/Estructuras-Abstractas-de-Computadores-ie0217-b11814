#include "mystack.hh"
	
int main (void){
	MyStack my_stack;	
	cout <<"Agregando datos "<<endl ;

	for (int i=100; i<110; i++){
	
		my_stack.pushBack(i);
		
	}
		
	((my_stack.isEmpty())?cout<<"Empty stack \n" : cout <<"Isn’t empty \n" ) ;
	cout <<"Eliminando datos "<<endl ;
	
	for (int i=0; i<10; i++){
		
		cout<<i<<".) "<<my_stack.popFront()<<endl; }
		
	((my_stack.isEmpty())?cout<<"Empty stack \n" : cout <<"Isn’t empty \n") ;
}
