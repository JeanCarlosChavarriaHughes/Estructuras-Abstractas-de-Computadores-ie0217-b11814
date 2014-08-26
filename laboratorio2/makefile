#Se definen los objetos , estos son los archivos que necesitan
#para crear el ejecutable .

OBJS = main.cpp

#Se define e l compilador

CC = g++

#Bandera de depuracion

DEBUG = −g

#Banderas de compilacion

CFLAGS = −Wall −c $(DEBUG) −pedantic

#Banderas para e l Linker

LFLAGS = −Wall $(DEBUG) −pedantic

#Archivo Ejecutable que se va a crear

TARGET = main

#Reglas a e j e c u t a r cuando se ejecute make

all :
	$(TARGET) : $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) −o $(TARGET)

#Al d i g i t a r make clean se borraran todos los archivos compilados ,
#note e l −f en rm , s i no sabe para que s i r v e use e l manual de rm .

clean :
	rm −f ∗.o $(TARGET)
