OBJS = formatos_3d.tex

TARGET = formatos_3d.pdf

CC = pdflatex

all:
	$(CC) $(OBJS)
	$(CC) $(OBJS)
	evince $(TARGET)
#look : $(TARGET)

clean:
	rm -r *.log *.aux *.pdf *.gz *.toc *.out *.lof
