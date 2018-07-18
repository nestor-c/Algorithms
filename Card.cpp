#include "Card.h"

 ostream& operator <<(ostream & out, Card & aCard){
	switch(aCard.rank){
	case 1: out << "Ace"; break;
	case 11:out << "Jack"; break;
	case 12:out << "Queen"; break;
	case 13:out << "King"; break;
	default:
		out << aCard.rank; break;
	}

	switch(aCard.suit){
		case diamond: out << " of Diamonds"; break;
		case spade: out << " of Spades"; break;
		case heart: out << " of Hearts"; break;
		case club: out << " of Clubs"; break;
	}
	return out;
}

Card::Card(){
	rank=1;
	suit=spade;
}
Card::Card(int rv, suits sv){
	rank = rv;
	suit = sv;
}
