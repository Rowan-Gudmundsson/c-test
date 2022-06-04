all: test
	gcc -o test objs/main.o

test:
	gcc -c -o objs/main.o src/main.c

clean:
	rm test
