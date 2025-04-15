#ifndef POKER_H
#define POKER_H

#include "Deck.h"
#include "Player.h"
#include <vector>
#include <string>

class Poker {
private:
    Deck deck;
    Player humanPlayer;
    std::vector<Player> bots; // Four bots
    std::vector<Card> communityCards; // Shared cards on the table

    void dealInitialCards();
    void dealCommunityCards();
    void showCommunityCards() const;
    std::string determineWinner();

public:
    Poker(const std::string& playerName);
    void startGame();
};

#endif