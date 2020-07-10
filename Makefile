bin/player.o: piskvorky/player.cpp
	g++ -c piskvorky/player.cpp -o bin/player.o

bin/stone.o: piskvorky/stone.cpp
	g++ -c piskvorky/stone.cpp -o bin/stone.o

bin/gstone.o: gui/gstone.cpp
	g++ -c gui/gstone.cpp -o bin/gstone.o

bin/board.o: piskvorky/board.cpp
	g++ -c piskvorky/board.cpp -o bin/board.o

bin/gboard.o: gui/gboard.cpp
	g++ -c gui/gboard.cpp -o bin/gboard.o

bin/piskvorky.o: piskvorky/piskvorky.cpp
	g++ -c piskvorky/piskvorky.cpp -o bin/piskvorky.o

bin/main.o: main.cpp
	g++ -c main.cpp -o bin/main.o

build: bin/player.o bin/stone.o bin/gstone.o bin/board.o bin/gboard.o bin/piskvorky.o bin/main.o
	g++ bin/* -o piskvorky.run -lsfml-graphics -lsfml-window -lsfml-system

clean:
	rm bin/*