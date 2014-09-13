#include "myqueue.hh"
	
int main (void){
	MyQueue my_queue;	
	cout <<" inserting data "<<endl ;

for (int i=100; i<110; i++){
	my_queue.pushBack(i);}
((my_queue.isEmpty())?cout<<"empty queue \n" : cout <<"isn’t empty \n" ) ;
cout <<"removing data "<<endl ;
for (int i=0; i<10; i++){
cout<<i<<".) "<<my_queue.popFront()<<endl; }
((my_queue.isEmpty())?cout<<"empty queue \n" : cout <<" isn’t empty \n") ;
}
