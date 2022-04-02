OBJETOS = ContenedorJugador.o ContenedorPartida.o ContenedorVideojuego.o \
Jugador.o Partida.o PartidaIndividual.o PartidaMultijugador.o Sistema.o \
Videojuego.o DtFechaHora.o DtPartida.o DtVideojuego.o main.o

DEF = ./classes/headers/ContenedorJugador.h ./classes/headers/ContenedorPartida.h \
./classes/headers/ContenedorVideojuego.h ./classes/headers/Jugador.h ./classes/headers/Partida.h \
./classes/headers/PartidaIndividual.h ./classes/headers/PartidaMultijugador.h \
./classes/headers/Sistema.h ./classes/headers/TipoJuego.h ./classes/headers/Videojuego.h \
./datatypes/headers/DtFechaHora.h ./datatypes/headers/DtPartida.h ./datatypes/headers/DtVideojuego.h 

CC = g++
OPCIONES = -c

all: Compilador

Compilador: $(OBJETOS)
	$(CC) $(OBJETOS) -o Compilador

main: main.cpp Makefile ./classes/headers/Sistema.h
	$(CC) $(OPCIONES) main.cpp

Jugador.o: ./classes/headers/Jugador.h ./classes/sources/Jugador.cpp
	$(CC) $(OPCIONES) ./classes/sources/Jugador.cpp

Partida.o: ./classes/headers/Partida.h ./classes/sources/Partida.cpp
	$(CC) $(OPCIONES) ./classes/sources/Partida.cpp

PartidaIndividual.o: ./classes/headers/PartidaIndividual.h ./classes/sources/PartidaIndividual.cpp
	$(CC) $(OPCIONES) ./classes/sources/PartidaIndividual.cpp

PartidaMultijugador.o: ./classes/headers/PartidaMultijugador.h ./classes/sources/PartidaMultijugador.cpp
	$(CC) $(OPCIONES) ./classes/sources/PartidaMultijugador.cpp

Sistema.o: ./classes/headers/Sistema.h ./classes/sources/Sistema.cpp
	$(CC) $(OPCIONES) ./classes/sources/Sistema.cpp

Videojuego.o: ./classes/headers/Videojuego.h ./classes/sources/Videojuego.cpp
	$(CC) $(OPCIONES) ./classes/sources/Videojuego.cpp

ContenedorJugador.o: ./classes/headers/ContenedorJugador.h ./classes/sources/ContenedorJugador.cpp
	$(CC) $(OPCIONES) ./classes/sources/ContenedorJugador.cpp

ContenedorPartida.o: ./classes/headers/ContenedorPartida.h ./classes/sources/ContenedorPartida.cpp
	$(CC) $(OPCIONES) ./classes/sources/ContenedorPartida.cpp

ContenedorVideojuego.o: ./classes/headers/ContenedorVideojuego.h ./classes/sources/ContenedorVideojuego.cpp
	$(CC) $(OPCIONES) ./classes/sources/ContenedorVideojuego.cpp

DtFechaHora.o: ./datatypes/headers/DtFechaHora.h ./datatypes/sources/DtFechaHora.cpp
	$(CC) $(OPCIONES) ./datatypes/sources/DtFechaHora.cpp

DtPartida.o: ./datatypes/headers/DtPartida.h ./datatypes/sources/DtPartida.cpp
	$(CC) $(OPCIONES) ./datatypes/sources/DtPartida.cpp

DtVideojuego.o: ./datatypes/headers/DtVideojuego.h ./datatypes/sources/DtVideojuego.cpp
	$(CC) $(OPCIONES) ./datatypes/sources/DtVideojuego.cpp

clean:
	rm -rf *o Compilador

rebuild:
	make clean
	make