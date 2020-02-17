# This is a Makefile comment
CC=g++ # the compiler name
CCFLAGS=-std=c++11 # flags passed to compiler
# the normal build rules


everything:
	$(CC) $(CCFLAGS) database.cpp database_h.h -c
	$(CC) $(CCFLAGS) driver.cpp -c
	$(CC) $(CCFLAGS) driver.o database.o -o myprog $(LIBS)
	./myprog

database.o: database.cpp database_h.h
	$(CC) $(CCFLAGS) database.cpp database_h.h -c


driver.o: driver.cpp
	$(CC) $(CCFLAGS) driver.cpp -c

myprog: driver.o database.o
	$(CC) $(CCFLAGS) driver.o database.o -o myprog $(LIBS)

run:
	./myprog


# other rules; no dependency; e.g. ‘‘make clean’’
clean:
	rm -f *.o
	rm -f myprog
	rm -f *.h.gch