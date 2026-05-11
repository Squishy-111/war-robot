#include "card.h"
#include "player.h"

#include <queue>

/* This class represents a 52 card deck of four suits that shuffles
and deals to players at the start of a game. */

class Deck {

    public:

    void shuffle();
    void deal(Player& player1, Player& player2);

    private:
    
    std::queue<Card> cards;


    
};