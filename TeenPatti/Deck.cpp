#include "Deck.h"
#include <algorithm>
#include <ctime>
#include <cstdlib>

Deck::Deck() {
    std::string suits[] = {"Hearts", "Diamonds", "Clubs", "Spades"};
    std::string ranks[] = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King", "Ace"};
    int values[] = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};

    for (const std::string& suit : suits) {
        for (int i = 0; i < 13; i++) {
            cards.push_back({ranks[i], suit, values[i]});
        }
    }
}

void Deck::shuffle() {
    srand(time(0));
    std::random_shuffle(cards.begin(), cards.end());
}

Card Deck::dealCard() {
    if (!cards.empty()) {
        Card card = cards.back();
        cards.pop_back();
        return card;
    }
    return {"", "", 0}; // Return an invalid card if the deck is empty
}

bool Deck::isEmpty() const {
    return cards.empty();
}