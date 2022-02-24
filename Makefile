# Starter Makefile
# add .cpp and .h files as specified in each task.

main: main.o
	g++ -o main main.o

main.o: main.cpp
	g++ -c main.cpp

clean:
	rm -f $(OBJECTS)
