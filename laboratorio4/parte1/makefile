#Se definen los objetos , estos son los archivos que necesitan
#para crear el ejecutable .

OBJS = principal.cpp figura.o circulo.o

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

circulo.o : circulo.hh circulo.cpp
	$(CC) $(CFLAGS) circulo.cpp

figura.o : figura.hh figura.cpp
	$(CC) $(CFLAGS) figura.cpp

clean :
	rm -r *.o $(TARGET) *.gch 
