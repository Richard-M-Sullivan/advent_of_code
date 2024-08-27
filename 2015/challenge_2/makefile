.PHONY: run
run: all
	./challenge1

.PHONY: all
all: challenge1
	gcc -o challenge1 main.c

challenge1: main.c
	gcc -o $@ $^
