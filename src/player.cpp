#include "player.h"

#include <vector>
#include <iostream>
#include <random>


/* The shuffle function starts by making a temp container, then drains the std::queue 
of cards into the temp, then randomly pushes an item from temp back to the std::queue 
and removes that item from temp, and does that until temp is empty. */

void Player::shuffle(){

    // temporary container for cards
    std::vector<Card> temp {};

    // drain cards into temp storage for random access
    while(discard.empty() != true) {
        temp.push_back(discard.top());
        discard.pop();
    }
    
    // grab random seed and initalize generator using Mersenne Twister
    std::random_device rd;
    std::mt19937 gen(rd());

    while(temp.empty() != true){

        // generate number from 1 to length of vector both inclusive
        std::uniform_int_distribution<> distr(0, temp.size() -1 );
        int rand_index {distr(gen)};

        discard.push(temp.at(rand_index));
        temp.erase(temp.begin() + rand_index);

    }

    std::cout << "discard pile is shuffled.";



}


void Player::add_to_discard(const Card& card){

    discard.push(card);

}

void Player::refill_hand(){

    //shuffles graveyard
    shuffle();

    hand = discard;
    discard = std::stack<Card>();

}

bool Player::is_hand_empty(){

    if(hand.empty()){
        return true;
    } else {
        return false;
    }

}