#include "game_engine.h"

void GameEngine::run(){

// create deck instance
// create both the human_player instance and the cpu_player instance
// input name for human player
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