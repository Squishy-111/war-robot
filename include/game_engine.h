#pragma once

#include "card.h"

#include <stack>
#include <iostream>


class GameEngine {

    public:

    void run();
        
    bool check_war();

    void war();

    void determine_battle_winner();

    bool check_ultimate_winner();

    void award_cards();

    std::string get_player_name();

    void flip_cards();


    private:

        Card last_played_card_player1;
        Card last_played_card_player2;
        std::string battle_winner;
        std::stack<Card> battle_cards {}; 


};