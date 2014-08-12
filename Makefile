# Makefile Mot Mystere

motMystere : Deroulement.o main.o
	g++ -o motMystere Deroulement.o main.o

Deroulement.o: Deroulement.cpp Deroulement.h
	g++ -c -o Deroulement.cpp
	
main.o : main.cpp Deroulement.h
  g++ -o -c main.cpp

clean :
	rm -f *.o
