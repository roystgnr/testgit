all: test

test.o : test.C test.h
	g++ -c $<

main.o : main.C test.h
	g++ -c $<

test : test.o main.o
	g++ -o $@ $^
