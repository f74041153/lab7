lab7:main.o genMino.o Mino.o mino1.o mino2.o mino3.o mino4.o
	g++ -o lab7 main.o genMino.o Mino.o mino1.o mino2.o mino3.o mino4.o
genMino.o:genMino.h genMino.cpp
	g++ -c genMino.cpp
main.o:main.cpp genMino.h
	g++ -c main.cpp
Mino.o:Mino.cpp Mino.h
	g++ -c Mino.cpp
mino1.o:mino1.cpp mino1.h
	g++ -c mino1.cpp
mino2.o:mino2.cpp mino2.h
	g++ -c mino2.cpp
mino3.o:mino3.cpp mino3.h
	g++ -c mino3.cpp
mino4.o:mino4.cpp mino4.h
	g++ -c mino4.cpp



