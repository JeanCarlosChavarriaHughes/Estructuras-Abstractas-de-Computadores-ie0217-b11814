#include "myqueue.hh"
	
int main (void){
	MyQueue my_queue;	
	cout <<"Inserting data "<<endl ;

	for (int i=100; i<110; i++){
	
		my_queue.pushBack(i);
		
	}
		
	((my_queue.isEmpty())?cout<<"Empty queue \n" : cout <<"Isn’t empty \n" ) ;
	cout <<"Removing data "<<endl ;
	
	for (int i=0; i<10; i++){
		
		cout<<i<<".) "<<my_queue.popFront()<<endl; }
		
	((my_queue.isEmpty())?cout<<"Empty queue \n" : cout <<"Isn’t empty \n") ;
}
