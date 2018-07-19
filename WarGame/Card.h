#ifndef CARD_H
#define CARD_H
#include <iostream>
using namespace std;

enum suits{spade, diamond, club, heart};

class Card{
		public:
		int rank;
		suits suit;
		Card();
		Card(int rv, suits sv);
	  friend ostream& operator<<(ostream& out, const Card& acard);
};
ostream& operator<<(ostream & out, Card & aCard);

#endif
