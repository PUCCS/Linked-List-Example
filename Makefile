all: fmain.c functions.c
	$(CC) -o main fmain.c functions.c -I .

run:
	./main

clean:
	rm -f main
	rm -f t

test: test.c functions.c
	$(CC) -o t test.c functions.c -I .
	./t
	rm -f t