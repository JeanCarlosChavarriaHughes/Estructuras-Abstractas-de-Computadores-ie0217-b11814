#Author
#Jean Carlos Chavarria Hughes

#Se definen los objetos y las fuentes
OBJS1 = algorithm.cpp
OUT1 = algorithm.o
HEADER1 = algorithm.hh
MAIN1 = principal_algorithm.cpp

#Se define el compilador
CC = g++

#Bandera de depuracion
CFLAGS = -g -Wall

#Bandera de compilacion
COMPILE = -c

#Archivo Ejecutable que se va a crear
TARGET = principal_algorithm
 
#Reglas para ejecutar cuando se ejecute make
$(TARGET):$(OUT1) $(MAIN1)
	$(CC) $(CFLAGS) -o $(TARGET) $(OUT1) $(MAIN1)

$(OUT1): $(OBJS1) $(HEADER1)
	$(CC) $(COMPILE) $(OBJS1)

all: 
	$(TARGET)

#Reglas para cuando se ejecute make clean
clean: 
	rm -r *.o *e~ $(TARGET)
	clear

