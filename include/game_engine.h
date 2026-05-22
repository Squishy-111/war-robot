#pragma once

#include "card.h"

#include <stack>
#include <iostream>


class GameEngine {

    public:
        
    bool check_war();

    void war();

    int determine_battle_winner();

    bool check_ultimate_winner();

    std::string get_player_name();

    void flip_cards();


    private:

        Card last_played_card_player1;
        Card last_played_card_player2;
        std::stack<Card> battle_cards {};


};