#ifndef GAME_H
#define GAME_H

#include "Deck.h"
#include "Player.h"

class Game {
private:
    Deck deck;
    Player player1;
    Player player2;

    std::string determineWinner(const std::vector<Card>& hand1, const std::vector<Card>& hand2);

public:
    Game(const std::string& name1, const std::string& name2);
    void playRound();
    void startGame(int rounds);
};

#endif