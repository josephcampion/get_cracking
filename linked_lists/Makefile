
output: main.o Node.o
	g++ main.o Node.o -o main

main.o: main.cpp
	g++ -c main.cpp

Node.o: Node.cpp Node.h
	g++ -c Node.cpp

clean:
	rm *.o output