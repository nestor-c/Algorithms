War:  War.cpp Player.o Deck.o Card.o HumanPlayer.o
	g++ -o War War.cpp Player.o Deck.o Card.o HumanPlayer.o

HumanPlayer.o: HumanPlayer.cpp
	g++ -c HumanPlayer.cpp

Player.o: Player.cpp
	g++ -c Player.cpp

Deck.o: Deck.cpp
	g++ -c Deck.cpp

Card.o: Card.cpp
	g++ -c Card.cpp

clean:
	rm *.o
