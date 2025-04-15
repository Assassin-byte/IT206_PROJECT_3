#ifndef DEALER_H
#define DEALER_H

#include "Player.h"

class Dealer : public Player {
public:
    Dealer(const std::string& dealerName);
    void showFirstCard() const; // Method to show only the first card
};

#endif