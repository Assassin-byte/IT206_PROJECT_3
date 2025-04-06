#ifndef CARD_H
#define CARD_H

#include <string>

struct Card {
    std::string rank;
    std::string suit;
    int value; // Numeric value for comparison
};

#endif