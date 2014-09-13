#Se definen los objetos , estos son los archivos que necesitan
#para crear el ejecutable .

OBJS = principal.cpp myqueue.o

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

TARGET = principal

#Reglas a ejecutar cuando se ejecute make
$(TARGET) : $(OBJS)
	$(CC) $(EFLAGS) -o $(TARGET) $(OBJS)

myqueue.o : myqueue.hh myqueue.cpp
	$(CC) $(CFLAGS) myqueue.cpp

clean :
	rm -r *.o $(TARGET) *.gch 
