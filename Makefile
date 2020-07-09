player.o: piskvorky/player.cpp
	g++ -c piskvorky/player.cpp -o bin/player.o

stone.o: piskvorky/stone.cpp
	g++ -c piskvorky/stone.cpp -o bin/stone.o

board.o: piskvorky/board.cpp
	g++ -c piskvorky/board.cpp -o bin/board.o

gboard.o: gui/gboard.cpp
	g++ -c gui/gboard.cpp -o bin/gboard.o

piskvorky.o: piskvorky/piskvorky.cpp
	g++ -c piskvorky/piskvorky.cpp -o bin/piskvorky.o

main.o: main.cpp
	g++ -c main.cpp -o bin/main.o


build: player.o stone.o board.o gboard.o piskvorky.o main.o
	g++ bin/* -o piskvorky.run -lsfml-graphics -lsfml-window -lsfml-system

clean:
	rm bin/*