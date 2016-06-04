persona:	persona.o main.o
	g++ persona.o main.o -o persona

persona.o:	persona.cpp persona.h
	g++ -c persona.cpp

main.o:	main.cpp persona.h persona.cpp
	g++ -c main.cpp
