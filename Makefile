all: test

test.o : test.C test.h
	g++ -c $<

test2.o : test2.C test2.h
	g++ -c $<

main.o : main.C test.h
	g++ -c $<

test : test.o test2.o main.o
	g++ -o $@ $^
