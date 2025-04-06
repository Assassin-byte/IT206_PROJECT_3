#include "cards.h"

Cards::Cards(int rank, const std::string& suit) : rankk(rank), suit(suit) {}

int Cards::getRank() const {
    return rankk;
}

std::string Cards::getSuit() const {
    return suit;
}

bool Cards::operator>(const Cards& other) const {
    return rankk > other.rankk;
}

bool Cards::operator<(const Cards& other) const {
    return rankk < other.rankk;
}

bool Cards::operator==(const Cards& other) const {
    return rankk == other.rankk && suit == other.suit;
}