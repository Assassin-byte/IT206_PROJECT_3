#include "Dealer.h"
#include <iostream>

Dealer::Dealer(const std::string& dealerName) : Player(dealerName) {}

void Dealer::showFirstCard() const {
    if (!getHand().empty()) {
        std::cout << "\nDealer's First Card:\n";
        getHand()[0].printCard();
        std::cout << "\n";
    } else {
        std::cout << "Dealer has no cards.\n";
    }
}