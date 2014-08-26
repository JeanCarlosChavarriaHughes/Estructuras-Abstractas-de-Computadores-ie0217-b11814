#Se definen los objetos , estos son los archivos que necesitan
#para crear el ejecutable .

OBJS = main.cpp mola.o

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

TARGET = mola

#Reglas a e j e c u t a r cuando se ejecute make
$(TARGET) : $(OBJS)
	$(CC) -o $(TARGET) $(OBJS)

mola.o : mola.cpp mola.hh
	$(CC) $(CFLAGS) mola.cpp
#$(CC) -c mola.cpp
#	$(CC) -o mola main.cpp mola.o
#Al d i g i t a r make clean se borraran todos los archivos compilados ,
#note e l −f en rm , s i no sabe para que s i r v e use e l manual de rm .

clean :
	rm -r *.o $(TARGET)
