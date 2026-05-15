#pragma once

#include "card.h"

#include <stack>

/* Player class is an abstract class with two child classes human
    and cpu to allow differences like inputs handling for humans.*/
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

    // let members be protected for cleaner access in child classes
    protected:

    std::stack<Card> discard {};
    std::stack<Card> hand {};
    

};