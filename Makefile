player.o: piskvorky/player.cpp
	g++ -c piskvorky/player.cpp -o bin/player.o

stone.o: piskvorky/stone.cpp
	g++ -c piskvorky/stone.cpp -o bin/stone.o

board.o: piskvorky/board.cpp
	g++ -c piskvorky/board.cpp -o bin/board.o

piskvorky.o: piskvorky/piskvorky.cpp
	g++ -c piskvorky/piskvorky.cpp -o bin/piskvorky.o


build: player.o stone.o board.o piskvorky.o
	g++ bin/* -o piskvorky.run

clean:
	rm bin/*