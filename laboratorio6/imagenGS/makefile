#Author
#Jean Carlos Chavarria Hughes

#Se definen los objetos y las fuentes
OBJS1 = imagenGS.cpp
HEADER1 = imagenGS.hh
OBJS2 = principalGS.cpp
OUT1 = imagenGS.o

#Se define el compilador
CC = g++

#Bandera de depuracion
CFLAGS = -g -Wall

#Bandera de compilacion
COMPILE = -c

#Archivo Ejecutable que se va a crear
TARGET = principalGS
 
#Librerias de OpenCV para compilacion
OPENCV = `pkg-config opencv --cflags --libs`
LIBS = $(OPENCV)
 
#Reglas para ejecutar cuando se ejecute make
$(TARGET):$(OBJS2) $(OUT1)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS2) $(OUT1) $(LIBS)

$(OUT1): $(OBJS1) $(HEADER1)
	$(CC) $(COMPILE) $(OBJS1)

all: 
	$(TARGET)

#Reglas para cuando se ejecute make clean
clean: 
	rm -fr *.o *.gch *.png $(TARGET)
