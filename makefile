CXX = clang++
CC = clang

main:	hash.o StringGenerator.o
	clang++ -o main main.cpp hash.o StringGenerator.o
test:	main
	./main

clean:
	rm -f *.o main