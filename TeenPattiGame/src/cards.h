#ifndef CARDS_H
#define CARDS_H

#include <string>

class Cards {
public:
    int rank; // Rank of the card
    std::string suit; // Suit of the card

    // Constructor
    Cards(int r, const std::string& s) : rank(r), suit(s) {}

    // Accessor methods
    int getRank() const { return rank; }
    std::string getSuit() const { return suit; }

    // Method to compare cards based on rank
    bool operator>(const Cards& other) const {
        return rank > other.rank;
    }
};

#endif // CARDS_H