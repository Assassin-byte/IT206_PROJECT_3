#ifndef GAME_H
#define GAME_H

#include <string>
#include "cards.h"

class Game {
public:
    Game(const std::string& player1Name, const std::string& player2Name);
    void startGame();
    void playRound();
    std::string determineWinner();

private:
    std::string player1Name;
    std::string player2Name;
    Cards player1Cards[3];
    Cards player2Cards[3];
    int player1Wins;
    int player2Wins;
    int roundsPlayed;
};

#endif // GAME_H