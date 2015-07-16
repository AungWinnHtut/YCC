mul.exe: multiple.o funHello.o
	gcc -o mul.exe multiple.o funHello.o

multiple.o: multiple.c
	gcc -c multiple.c

funHello.o: funHello.c
	gcc -c funHello.c