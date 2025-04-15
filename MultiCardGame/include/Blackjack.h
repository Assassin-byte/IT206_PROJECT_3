#ifndef BLACKJACK_H
#define BLACKJACK_H

#include "Deck.h"
#include "Player.h"
#include "Dealer.h"

class Blackjack {
private:
    Deck deck;
    Player player;
    Dealer dealer; // Use Dealer instead of Player for the dealer

public:
    Blackjack();
    void startGame();
};

#endif