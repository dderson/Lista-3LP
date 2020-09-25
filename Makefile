all:
	g++ -Wall -pedantic main.cpp complex.cpp -o program

go:
	./program

clean: 
	rm program

