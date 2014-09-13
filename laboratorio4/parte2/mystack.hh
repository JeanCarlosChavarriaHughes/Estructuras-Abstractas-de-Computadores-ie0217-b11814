#include <string>
#include <iostream>
#include <cstdlib>
using namespace std;

#ifndef STACKCLASS
#define STACKCLASS

typedef struct node{
	
	int data;
	node *next;
	
} mynode;

class MyStack{
	
	private:
		mynode *first;
	public:
		MyStack(void);
		~MyStack(void);
		bool pushBack(int);
		int popFront(void);
		bool isEmpty(void);
};

#endif
