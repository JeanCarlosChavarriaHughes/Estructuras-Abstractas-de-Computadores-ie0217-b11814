#Se definen los objetos , estos son los archivos que necesitan
#para crear el ejecutable .
OBJ1 = figura.cpp
OBJ2 = figura.hh
OBJ3 = circulo.cpp
OBJ4 = circulo.hh
OBJ5 = cuadrado.cpp
OBJ6 = cuadrado.hh
OBJ7 = triangulo.cpp
OBJ8 = triangulo.hh
OBJ9 = principal.cpp
OBJ10 = Reporte4.tex
OBJ11 = doxyfile.cnf

#Se define el compilador
CC = g++
CLX = pdflatex
DF = doxygen


#Bandera de depuracion
DEBUG = -g
#Banderas de compilacion
CFLAGS = -Wall -c -pedantic
#Banderas para e l Linker
LFLAGS = -Wall $(DEBUG) -pedantic
#Archivo Ejecutable que se va a crear
TARGET1 = Principal
TARGET2 = Reporte4.pdf
#Reglas a ejecutar cuando se ejecute make
all: sources reporte documentacion queue stack

sources:
	$(CC) $(CFLAGS) $(OBJ1)
	$(CC) $(CFLAGS) $(OBJ2)
	$(CC) $(CFLAGS) $(OBJ3)
	$(CC) $(CFLAGS) $(OBJ4)
	$(CC) $(CFLAGS) $(OBJ5)
	$(CC) $(CFLAGS) $(OBJ6)
	$(CC) $(CFLAGS) $(OBJ7)
	$(CC) $(CFLAGS) $(OBJ8)
	$(CC) -Wall -o $(TARGET1) -pedantic $(OBJ9) figura.o circulo.o cuadrado.o triangulo.o
	
queue:
	$(CC) $(CFLAGS) myqueue.hh
	$(CC) $(CFLAGS) myqueue.cpp
	$(CC) -Wall -o Queue -pedantic mainqueue.cpp myqueue.o
	
stack:
	$(CC) $(CFLAGS) mystack.hh
	$(CC) $(CFLAGS) mystack.cpp
	$(CC) -Wall -o Stack -pedantic mainstack.cpp mystack.o
reporte:
	$(CLX) $(OBJ10)
	$(CLX) $(OBJ10)
	evince $(TARGET2)
documentacion:
	$(DF) $(OBJ11)
#Al digitar make clean se borraran todos los archivos compilados,
#note e l −f en rm , s i no sabe para que sirve use el manual de rm .
clean :
	rm -f *.o *.gch *.log *.aux  *.gz *.lof *.out *.toc *.pdf Principal Queue Stack
	rm -r latex/ html/
		
