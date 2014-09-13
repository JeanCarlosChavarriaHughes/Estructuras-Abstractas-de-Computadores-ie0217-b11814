#Se definen los objetos , estos son los archivos que necesitan
#para crear el ejecutable .

OBJS1 = principal_queue.cpp myqueue.o
OBJS2 = principal_stack.cpp mystack.o

#Se define e l compilador

CC = g++

#Bandera de depuracion

DEBUG = -g

#Banderas de compilacion

#CFLAGS = -c
CFLAGS = -Wall -c $(DEBUG) -pedantic

#Banderas para el Linker

LFLAGS = -Wall $(DEBUG) -pedantic

#Banderas para el ejecutable
EFLAGS = -Wall -pedantic	

#Archivo Ejecutable que se va a crear

TARGET1 = principal_queue
TARGET2 = principal_stack

#Reglas a ejecutar cuando se ejecute make
all : $(TARGET1) $(TARGET2)

$(TARGET1) : $(OBJS1)
	$(CC) $(EFLAGS) -o $(TARGET1) $(OBJS1)

myqueue.o : myqueue.hh myqueue.cpp
	$(CC) $(CFLAGS) myqueue.cpp

$(TARGET2) : $(OBJS2)
	$(CC) $(EFLAGS) -o $(TARGET2) $(OBJS2)

mystack.o : mystack.cpp mystack.hh
	$(CC) $(CFLAGS) mystack.cpp

clean :
	rm -r *.o $(TARGET1) $(TARGET2) *.gch

