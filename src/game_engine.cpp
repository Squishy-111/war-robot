#include "game_engine.h"

void GameEngine::run(){

// create deck instance
// create both the human_player instance and the cpu_player instance
// shuffle and deal deck

// implement main game while loop checking for ultimate winner
// check if both players hand is empty
// refill cards if hand is empty for either player
// flip cards
// check for war
// move won cards to winner's graveyard
// check if both players hand is empty
// refill cards if hand is empty for either player



}

bool GameEngine::check_war(){

    if(last_played_card_player1.rank == last_played_card_player2.rank){
        return true;
    } else {
        return false;
    }

}

std::string GameEngine::get_player_name(){
    
    std::cout << "what is your name: \n";
    std::string name {};
    std::cin >> name;

    return name;

}

void GameEngine::determine_battle_winner(){

    if(last_played_card_player1.rank > last_played_card_player2.rank){
        battle_winner = "player1";
    } else {
        battle_winner = "player2";
    }

}

bool GameEngine::check_ultimate_winner(Player& player1, Player& player2){

    if(player1.is_hand_empty() && player1.is_discard_empty()){

        ultimate_winner = "player2";
        return true;

    } else if(player2.is_hand_empty() && player2.is_discard_empty()) {

        ultimate_winner = "player1";
        return true;

    } else {
        return false;
    }

}

void GameEngine::award_cards(Player& player){

    while(battle_cards.empty() != true) {

        player.get_discard().push(battle_cards.top());
        battle_cards.pop();
        
    }


}

void GameEngine::war(){

    for(int i=0; i<4; ++i){
        flip_cards();
        battle_cards.push(last_played_card_player1);
        battle_cards.push(last_played_card_player2);
    }

}

