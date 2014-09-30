#Makefile for bioviewer
# Lucas A. Walter Nov. 2002

CC = g++

PROGRAM = bioviewer

SRCDIR = src
OBJDIR = lib

OBJS = $(OBJDIR)/misc.o $(OBJDIR)/pointMass.o $(OBJDIR)/movable.o $(OBJDIR)/camera.o $(OBJDIR)/triangle.o $(OBJDIR)/material.o $(OBJDIR)/objloader.o $(OBJDIR)/rigid.o $(OBJDIR)/light.o $(OBJDIR)/body.o $(OBJDIR)/bvh.o $(OBJDIR)/para.o $(OBJDIR)/main.o

SDL_CFLAGS := $(shell sdl-config --cflags)
SDL_LDFLAGS := $(shell sdl-config --libs)

PARAGUI_CFLAGS = -I/usr/include/paragui -I/usr/include/freetype2
PARAGUI_LIBS = -L/usr/lib -lparagui -lSDL_image -lfreetype -lstdc++


CFLAGS = $(SDL_CFLAGS)  $(PARAGUI_CFLAGS)
LIB = -lGL -lGLU -lm $(SDL_LDFLAGS) $(PARAGUI_LIBS)
INCLUDE = 
#-B ./include/ -I ../GLGooey/include/glgooey/

%.o: ../$(SRCDIR)/%.cpp 
	$(CC) $(CFLAGS) -c $(INCLUDE) -o $@ $<

all: $(PROGRAM)


$(PROGRAM): $(OBJS)
	$(CC) $(LIB) -o $@ $(OBJS) 
#$<

debug:
	$(CC) -g $(LIB) -o $@ $(OBJS)

clean:
	#if [-a "bioviewer"]; then
	rm -f bioviewer
	#fi
	rm -f $(OBJDIR)/*.o
