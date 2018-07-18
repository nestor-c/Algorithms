#include "Player.h"
#include "HumanPlayer.h"

int main(){
	Deck theDeck;
	theDeck.shuffleDeck();

cout << "Test" << endl;

	Player computer(theDeck);
	HumanPlayer human(theDeck);

cout << "Test" << endl;

	while(!theDeck.isEmpty()){
		Card card1 = computer.draw();
		Card card2 = human.draw();
		cout << "Computer plays " << card1 << endl;
		cout << "Human plays " << card2 << endl;
		
		if (card1.rank == card2.rank){
			computer.addPoints(1);
			human.addPoints(1);
			cout << "Players tie\n";
		}
		else if (card1.rank > card2.rank){
			computer.addPoints(2);
			cout<<"Computer wins round!\n";
		}
		else{
			human.addPoints(2);
			cout << "Human wins round!\n";
		}

		computer.replaceCard(theDeck);
		human.replaceCard(theDeck);
	}
	cout << "Computer score " << computer.score() << endl;
	cout << "Human score " << human.score() << endl;

	return 0;
}
