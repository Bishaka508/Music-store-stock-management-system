mainstore: maincode.o
	g++ maincode.o -o mainstore

maincode.o:maincode.cpp
	g++ -c maincode.cpp

clean:
	rm *.o mainstore		
