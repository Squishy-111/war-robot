#pragma once

#include "card.h"
#include "player.h"

#include <stack>
#include <iostream>


class GameEngine {

    public:

    void run();
        
    bool check_war();

    void war(Player& player1, Player& player2);

    void determine_battle_winner();

    bool check_ultimate_winner(Player& player1, Player& player2);

    // give cards to battle_winner located in battle_cards stack
    void award_cards(Player& player);

    std::string get_player_name();

    void flip_cards(Player& player1, Player& player2);


    private:

        Card last_played_card_player1;
        Card last_played_card_player2;
        std::string battle_winner;
        std::string ultimate_winner;
        std::stack<Card> battle_cards {}; 


};