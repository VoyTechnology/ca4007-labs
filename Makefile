.PHONY: lab1

all: lab1

setup:
	@mkdir bin &> /dev/null

lab1: setup
	gcc lab1/main.c -lGL -lGLU -lglut -o bin/lab1
