cc = gcc
appName = program

sources := main.c
objects = $(patsubst %.c, %.o, $(sources))

flags = -g -Wall
libPath =
libs =

#Compile, link and execute the program
all: program run

program: $(objects)
	$(cc) -o $(appName) $^ $(libPath) $(libs)

%.o : %.cpp
	$(cc) $(flags) -c -o $@ $<

#Delete all object files
#WARNING! The whole project needs to be recompiled after this
clean:
	find . -type f -iname \*.o -delete

.PHONY: all

.PHONY run:
	./$(appName)