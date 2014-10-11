#Author
#Jean Carlos Chavarria Hughes

#Se definen los objetos y las fuentes
OBJS1 = vector.cpp
HEADER1 = vector.hh
OUT1 = vector.o
OBJS2 = principal_vector.cpp

#Se define el compilador
CC = g++

#Bandera de depuracion
CFLAGS = -g -Wall

#Bandera de compilacion
COMPILE = -c

#Archivo Ejecutable que se va a crear
TARGET = vector
 
#Reglas para ejecutar cuando se ejecute make
$(TARGET):$(OBJS1) $(OUT1)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS2) $(OUT1)

$(OUT1): $(OBJS1) $(HEADER1)
	$(CC) $(COMPILE) $(OBJS1)

all: 
	$(TARGET)

#Reglas para cuando se ejecute make clean
clean: 
	rm -r *.o $(TARGET)
