#Se definen los objetos , estos son los archivos que necesitan
#para crear el ejecutable .

OBJS1 = principal3.cpp matriz3.o

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

TARGET1 = principal3

#Reglas a ejecutar cuando se ejecute make
all : $(TARGET1) 

$(TARGET1) : $(OBJS1)
	$(CC) $(EFLAGS) -o $(TARGET1) $(OBJS1)

matriz3.o : matriz3.cpp matriz3.h
	$(CC) $(CFLAGS) matriz3.cpp

clean :
	rm -r *.o $(TARGET1)

