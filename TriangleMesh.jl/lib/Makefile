CC=gcc
Opt=-Ofast
CSWITCHES = $(Opt) -DLINUX -fPIC -shared -I/usr/X11R6/include -L/usr/X11R6/lib
TRILIBDEFS = -DTRILIBRARY
TRIANGLELIB=./

all:libtrianglemesh.so

$(TRIANGLELIB)triangle.o:$(TRIANGLELIB)triangle.c $(TRIANGLELIB)triangle.h
	$(CC) $(CSWITCHES) $(TRILIBDEFS) -c -o $(TRIANGLELIB)triangle.o \
$(TRIANGLELIB)triangle.c 

Mesh.o: Mesh.cc 
	$(CXX) -c -std=c++11 -fopenmp -march=native -D_GNU_SOURCE -fPIC -fno-omit-frame-pointer -Wno-write-strings -pthread -DNDEBUG -ffast-math $< -o $@ 

libtrianglemesh.so: Mesh.o triangle.o
	$(CXX) -shared -o $@ triangle.o Mesh.o  -lm -fopenmp


clean:
	rm *.so *.o
