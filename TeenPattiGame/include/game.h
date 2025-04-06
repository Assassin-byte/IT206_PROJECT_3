// This file contains the declaration of the Game class and its public methods.

#ifndef GAME_H
#define GAME_H

#include <string>

class Game {
public:
    Game(const std::string& player1, const std::string& player2);
    void startGame();
    void playRound();
    std::string determineWinner();

private:
    std::string player1Name;
    std::string player2Name;
    int player1Wins;
    int player2Wins;
    // Additional private methods and attributes can be declared here
};

#endif // GAME_H