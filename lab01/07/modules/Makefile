all: program.exe
program.exe: main.o hello.o goodbye.o message.o
	g++ main.o hello.o goodbye.o message.o -o program.exe
main.o: main.cpp functions.h
	g++ -c main.cpp -o main.o
hello.0: hello.cpp functions.h
	g++ -c hello.cpp -o hello.o
goodbye.o: goodbye.cpp functions.h
	g++ -c goodbye.cpp -o goodbye.o
message.o: message.cpp functions.h
	g++ -c message.cpp -o message.o
clean:
	rm -f *.o program.exe