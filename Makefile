binary: main.o libw1.a libw2.a
	gcc -o binary main.o -L. -lw1 -lw2

main.o: main.c
	gcc -c main.c

libw1.a: hello.o
	ar cr libw1.a hello.o

libw2.a: goodbye.o
	ar cr libw2.a goodbye.o

hello.o: hello.c
	gcc -c hello.c

goodbye.o: goodbye.c
	gcc -c goodbye.c

clean:
	rm -f *.o *.a binary
