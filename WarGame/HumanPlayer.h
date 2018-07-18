#include "Player.h"

class HumanPlayer: public Player{
  public:
    HumanPlayer(Deck& aDeck): Player(aDeck){};
    Card draw();
};
