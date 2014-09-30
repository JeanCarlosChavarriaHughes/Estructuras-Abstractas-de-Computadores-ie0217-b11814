#MakeFile para archivo en OPENCV
#Compila el archivo .cpp y genera un ejecutable
#Jorge Blanco Garita

#Se definen los objetos y las fuentes
SRCS = ejemplo.cpp

#Se define el compilador
CC = g++

#Bandera de depuracion
CFLAGS = -g -Wall

#Archivo Ejecutable que se va a crear
TARGET = HelloWorld
 
#Librerias de OpenCV para compilacion
OPENCV = `pkg-config opencv --cflags --libs`
LIBS = $(OPENCV)
 
#Reglas para ejecutar cuando se ejecute make
$(TARGET):$(SRCS)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRCS) $(LIBS)

all: 
	$(TARGET)

#Reglas para cuando se ejecute make clean
clean: 
	rm -f *.o *.gch $(TARGET)
