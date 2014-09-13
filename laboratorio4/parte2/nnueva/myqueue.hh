#include <string>
#include <iostream>
#include <cstdlib>
using namespace std;

#ifndef QUEUECLASS
#define QUEUECLASS

typedef struct node{
	
	int data;
	node *next;
	
} mynode;

class MyQueue{
	
	private:
		mynode *first, *last;
	public:
		MyQueue(void);
		~MyQueue(void);
		bool pushBack(int);
		int popFront(void);
		bool isEmpty(void);
};

#endif
