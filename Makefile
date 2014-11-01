all: rollme

rollme: create.o mydice.o myIO.o
	g++ create.o mydice.o myIO.o -o rollme

create.o: create.cpp
	g++ -c create.cpp

mydice.o: mydice.cpp
	g++ -c mydice.cpp

myIO.o: myIO.cpp
	g++ -c myIO.cpp

clean:
	rm -rf *o rollme
