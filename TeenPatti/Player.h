#ifndef PLAYER_H
#define PLAYER_H

#include "Card.h"
#include <vector>
#include <string>

class Player {
private:
    std::string name;
    std::vector<Card> hand;

public:
    Player(const std::string& playerName);
    void addCard(const Card& card);
    void showHand() const;
    std::string getName() const;
    std::vector<Card> getHand() const;
};

#endif