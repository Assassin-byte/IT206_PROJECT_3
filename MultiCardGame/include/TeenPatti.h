#ifndef TEENPATTI_H
#define TEENPATTI_H

#include "Deck.h"
#include "Player.h"

class TeenPatti {
private:
    Deck deck;
    Player player1;
    Player player2;

public:
    TeenPatti();
    void startGame();
};

#endif