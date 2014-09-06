#Se definen los objetos , estos son los archivos que necesitan
#para crear el ejecutable .

OBJS_DOC = doc.cnf

#Se define e l compilador

CC = g++
DX = doxygen
MK = make

#Bandera de depuracion

DEBUG = -g

#Banderas de compilacion

CFLAGS = -c
#CFLAGS = -Wall -c $(DEBUG) -pedantic

#Banderas para el Linker

LFLAGS = -Wall $(DEBUG) -pedantic

#Reglas a e j e c u t a r cuando se ejecute make

all:
	$(DX) $(OBJS_DOC)
	$(MK) -C ./documentacion/latex/ all

clean :
	rm -r documentacion/
