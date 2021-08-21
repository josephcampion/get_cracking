
output: main.o stack.o
	g++ main.o stack.o queue.o -o main

main.o: main.cpp
	g++ -c main.cpp

stack.o: stack.cpp stack.h
	g++ -c stack.cpp

queue.o: queue.cpp queue.h
	g++ -c queue.cpp

clean:
	rm *.o output