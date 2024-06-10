all: bubblesort

bubblesort: bubblesort.c
	gcc -m32 -g -Wall -o bubblesort bubblesort.c

clean:
	rm -f bubblesort