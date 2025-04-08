#include "Deck.h"
#include <algorithm> // For std::shuffle
#include <random>    // For std::random_device and std::mt19937

Deck::Deck() {
    // Initialize the deck with 52 cards (standard deck)
    const std::string suits[] = {"Hearts", "Diamonds", "Clubs", "Spades"};
    const std::string ranks[] = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King", "Ace"};

    for (const auto& suit : suits) {
        for (const auto& rank : ranks) {
            cards.emplace_back(rank, suit); // Assuming Card has a constructor Card(std::string rank, std::string suit)
        }
    }
}

void Deck::shuffle() {
    // Shuffle the deck using a random number generator
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(cards.begin(), cards.end(), g);
}

Card Deck::dealCard() {
    if (!cards.empty()) {
        Card dealtCard = cards.back();
        cards.pop_back(); // Remove the last card from the deck
        return dealtCard;
    }
    throw std::out_of_range("No cards left in the deck");
}

bool Deck::isEmpty() const {
    return cards.empty();
}