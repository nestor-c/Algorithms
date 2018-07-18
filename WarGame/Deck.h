#ifndef DECK_H
#define DECK_H
#include "Card.h"

class randomInteger{
	public:
		unsigned int operator()(unsigned int max){
			unsigned int rval=rand();
			return rval % max;
		}
};

class Deck{
	public:
		Deck();
		void shuffleDeck();
		bool isEmpty();
		virtual Card draw();
		randomInteger randomizer;

	protected:
		Card cards[52];
		int topCard;

};
#endif
