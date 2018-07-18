#ifndef PLAYER_H
#define PLAYER_H
#include "Deck.h"


class Player{
	public:
	Player (Deck&);
	Card draw();
	void addPoints(int);
	int score();
	void replaceCard(Deck &);
	randomInteger randomizer;

	protected:
	Card myCards[3];
	int myScore;
	int removedCard;
};
#endif
