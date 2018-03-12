.PHONY: lab1 lab2

all: lab1 lab2

setup:
	-mkdir bin

lab1: setup
	gcc lab1/main.c -lGL -lGLU -lglut -o bin/lab1

lab2: setup
	gcc lab2/main.c -lGL -lGLU -lglut -o bin/lab2
