#Chase Richards
#CMPSCI 4280 P2
#Filename: makefile

P2: main.cpp parser.cpp scanner.cpp
	g++ -std=c++0x -Wall -g -o frontEnd main.cpp parser.cpp scanner.cpp

clean:
	rm frontEnd keyboard.txt
