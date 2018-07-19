#include "Deck.h"

Deck::Deck(){
	topCard=0;
	for (int i = 1; i<=13; i++){
		Card c1(i, diamond), c2(i, spade), c3(i, heart), c4(i, club);
		cards[topCard++] = c1;
		cards[topCard++] = c2;
		cards[topCard++] = c3;
		cards[topCard++] = c4;
	}
};

void Deck::shuffleDeck(){
	random_shuffle(cards, cards+52, randomizer);
};

bool Deck::isEmpty(){
	return topCard <=0;
};

Card Deck::draw(){
	if (!isEmpty()){ return cards[--topCard];}
	else{
		Card spadeAce(1, spade);
		return spadeAce;
	}
};
