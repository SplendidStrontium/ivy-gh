all: rollme

rollme: create.o mydice.o
	g++ create.o mydice.o -o rollme

create.o: create.cpp
	g++ -c create.cpp

mydice.o: mydice.cpp
	g++ -c mydice.cpp

clean:
	rm -rf *o rollme
