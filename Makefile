# Starter Makefile
# add .cpp and .h files as specified in each task.

main: main.o box.o checkerboard.o cross.o
	g++ -o main main.o box.o checkerboard.o cross.o

main.o: main.cpp box.h checkerboard.h
	g++ -c main.cpp

box.o: box.cpp box.h
	g++ -c box.cpp

checkerboard.o: checkerboard.cpp checkerboard.h
	g++ -c checkerboard.cpp

cross.o: cross.cpp cross.h
	g++ -c cross.cpp

clean:
	rm -f main main.o box.o checkerboard.o cross.o
