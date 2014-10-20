#Author
#Jean Carlos Chavarria Hughes

#Se definen los objetos y las fuentes
OBJS1 = queue.cpp
OUT1 = queue.o

#Se define el compilador
CC = g++

#Bandera de depuracion
CFLAGS = -g -Wall

#Bandera de compilacion
COMPILE = -c

#Archivo Ejecutable que se va a crear
TARGET = queue
 
#Reglas para ejecutar cuando se ejecute make
$(TARGET):$(OBJS1) $(OUT1)
	$(CC) $(CFLAGS) -o $(TARGET) $(OUT1)

$(OUT1): $(OBJS1)
	$(CC) $(COMPILE) $(OBJS1)

all: 
	$(TARGET)

#Reglas para cuando se ejecute make clean
clean: 
	rm -r *.o $(TARGET)
	clear

