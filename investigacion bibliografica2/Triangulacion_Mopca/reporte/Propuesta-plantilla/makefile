OBJS = propuesta.tex
TEX = pdflatex
TARGET = propuesta.pdf
$(TARGET) : $(OBJS)
	$(TEX) $(OBJS)
look : $(TARGET)
	okular $(TARGET) &
clean:
	rm -f *.log *.aux *.pdf *.gz
