.PHONY: run
run: all
	./challenge2

.PHONY: all
all: challenge2
	gcc -o challenge2 main.c

challenge2: main.c
	gcc -o $@ $^
