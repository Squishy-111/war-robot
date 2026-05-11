#include "deck.h"

#include <queue>
#include <vector>
#include <iostream>
#include <random>


/* The shuffle function starts by making a temp container, then drains the std::queue 
for cards into the temp, then randomly pushes an item from temp back to the std::queue 
and removes that item from temp, and does that until temp is empty. */

void Deck::shuffle(){

    // temporary container for cards
    std::vector<Card> temp {};

    // drain cards into temp storage for random access
    while(cards.empty() != true) {
        temp.push_back(cards.front());
        cards.pop();
    }
    
    // grab random seed and initalize generator using Mersenne Twister
    std::random_device rd;
    std::mt19937 gen(rd());

    while(temp.empty() != true){

        // generate number from 1 to length of vector both inclusive
        std::uniform_int_distribution<> distr(0, temp.size() -1 );
        int rand_index {distr(gen)};

        cards.push(temp.at(rand_index));
        temp.erase(temp.begin() + rand_index);

    }

    std::cout << "deck is shuffled.";


}

/* dequeue cards from the Deck class cards queue to both players hand, 
alternating pushing cards to each players until no cards left. */

void Deck::deal(Player& player1, Player& player2){

    while(cards.empty() != true) {

        player1.hand.push(cards.front());
        cards.pop();
        
        player2.hand.push(cards.front());
        cards.pop();
        
    }

    std::cout << "The cards are dealt.";

}