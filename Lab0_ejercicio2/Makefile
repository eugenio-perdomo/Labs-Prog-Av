OBJETOS = A.o B.o C.o main.o

HEADERS = A.h B.h C.h

CC = g++
OPCIONES = -c -Wall

all: ejercicio2

ejercicio2: $(OBJETOS)
	$(CC) $(OBJETOS) -o ejercicio2

main.o: main.cpp Makefile $(HEADERS)
	$(CC) $(OPCIONES) main.cpp

A.o: A.cpp $(HEADERS)
	$(CC) $(OPCIONES) A.cpp

B.o: B.cpp $(HEADERS)
	$(CC) $(OPCIONES) B.cpp

C.o: C.cpp $(HEADERS)
	$(CC) $(OPCIONES) C.cpp

.PHONY: clean
clean:
	rm -rf *o ejercicio2

rebuild:
	make clean
	make