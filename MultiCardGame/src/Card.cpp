#include "Card.h"
#include <iostream>

Card::Card() : rank(""), suit(""), value(0) {}

Card::Card(const std::string& rank, const std::string& suit, int value)
    : rank(rank), suit(suit), value(value) {}

std::string Card::getRank() const {
    return rank;
}

std::string Card::getSuit() const {
    return suit;
}

int Card::getValue() const {
    return value;
}

void Card::printCard() const {
    std::cout << rank << " of " << suit << " (" << value << ")";
}