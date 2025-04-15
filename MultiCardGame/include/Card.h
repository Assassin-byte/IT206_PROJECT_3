#ifndef CARD_H
#define CARD_H

#include <string>

class Card {
private:
    std::string rank;  // Rank of the card (e.g., "A", "K", "2")
    std::string suit;  // Suit of the card (e.g., "Hearts", "Spades")
    int value;         // Numeric value for comparison

public:
    Card();
    Card(const std::string& rank, const std::string& suit, int value);

    std::string getRank() const;
    std::string getSuit() const;
    int getValue() const;

    void printCard() const;
};

#endif