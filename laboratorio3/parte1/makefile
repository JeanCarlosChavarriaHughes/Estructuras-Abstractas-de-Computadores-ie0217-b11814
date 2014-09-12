#Se definen los objetos , estos son los archivos que necesitan
#para crear el ejecutable .

OBJS1 = punteros.cpp  
OBJS2 = punteros_funciones.cpp 
OBJS3 = punteros_funciones2.cpp 
OBJS4 = punteros_funciones3.cpp
OBJS5 = punt_punt.cpp
OBJS6 = punteros_arreglos.cpp

#Se define e l compilador

CC = g++

#Bandera de depuracion

DEBUG = -g

#Banderas de compilacion

CFLAGS = -c
#CFLAGS = -Wall -c $(DEBUG) -pedantic

#Banderas para el Linker

LFLAGS = -Wall $(DEBUG) -pedantic
	
#Archivo Ejecutable que se va a crear

TARGET1 = punteros.o
TARGET2 = punteros_funciones.o
TARGET3 = punteros_funciones2.o
TARGET4 = punteros_funciones3.o
TARGET5 = punt_punt.o
TARGET6 = punteros_arreglos.o

#Reglas a ejecutar cuando se ejecute make
all:

	$(CC) -o $(TARGET1) $(OBJS1)


	$(CC) -o $(TARGET2) $(OBJS2)


	$(CC) -o $(TARGET3) $(OBJS3)


	$(CC) -o $(TARGET4) $(OBJS4)


	$(CC) -o $(TARGET5) $(OBJS5)


	$(CC) -o $(TARGET6) $(OBJS6)

clean :
	rm -r *.o


