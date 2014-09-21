OBJS = reporte.tex

CC = pdflatex

TARGET = reporte.pdf

all:
	$(CC) $(OBJS)
	evince reporte.pdf
clean:
	rm -r *.log *.aux *.pdf #*.gz
