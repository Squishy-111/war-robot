#pragma once

#include "card.h"

#include <stack>
#include <iostream>

/*  The Player class  represents a player in game, managing
their hand and discard pile throughout gameplay.*/
class Player {

    public:

    // shuffle discard pile
    void shuffle();

    // add won cards to discard
    void add_to_discard(const Card& card);

    // refill hand with discard
    void refill_hand();

    bool is_hand_empty();

    // return card to the game_engine
    Card flip_card();

    private:

    std::stack<Card> discard {};
    std::stack<Card> hand {};
    std::string name {};
    

};