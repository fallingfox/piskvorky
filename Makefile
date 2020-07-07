player.o: piskvorky/player.cpp
	g++ -c piskvorky/player.cpp -o bin/player.o

stone.o: piskvorky/stone.cpp
	g++ -c piskvorky/stone.cpp -o bin/stone.o

board.o: piskvorky/board.cpp
	g++ -c piskvorky/board.cpp -o bin/board.o