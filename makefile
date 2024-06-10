all: bubblesort hexaprint

bubblesort: bubblesort.c
	gcc -m32 -g -Wall -o bubblesort bubblesort.c

hexaprint: hexaprint.c
	gcc -m32 -g -Wall -o hexaprint hexaprint.c

clean:
	rm -f bubblesort hexarint