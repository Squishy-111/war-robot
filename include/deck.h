#pragma once

#include "card.h"
#include "player.h"

#include <stack>

/* This class represents a 52 card deck of four suits that shuffles
and deals to players at the start of a game. */

class Deck {

    public:

    void shuffle();
    void deal(Player& player1, Player& player2);

    Deck() {

        for(int SuitInt = static_cast<int>(Card::Suit::club); SuitInt <= static_cast<int>(Card::Suit::spade); SuitInt++ ){
            for(int RankInt = static_cast<int>(Card::Rank::ace); RankInt <= static_cast<int>(Card::Rank::king); RankInt++){
                cards.push(Card(static_cast<Card::Suit>(SuitInt),static_cast<Card::Rank>(RankInt)));
            }
        }
    }
    
    private:
    
    std::stack<Card> cards;


    
};