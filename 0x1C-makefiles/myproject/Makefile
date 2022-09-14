#.DEFAULT_GOAL := generate #this will run the target 'generate' as the default
#all: say_hello generate
.PHONY: all all

say_hello:
	@echo "Hello world"

generate:
	@echo "creating empty text files..."
	touch file-{1..10}.txt
clean:
	@echo "Cleaning up..."
	rm *.txt

CC = gcc
hello: hello.c
	${CC} hello.c -o hello
CC := gcc
CC := ${CC}

all:
	@echo ${CC}
