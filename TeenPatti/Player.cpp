#include "Player.h"
#include <iostream>
#include <iomanip>

Player::Player(const std::string& playerName) : name(playerName) {}

void Player::addCard(const Card& card) {
    hand.push_back(card);
}

void Player::showHand() const {
    std::cout << "\nCards of " << name << " are:\n";

    // Print the top border of the cards
    for (const Card& card : hand) {
        std::cout << ".------. ";
    }
    std::cout << "\n";

    // Print the rank on the top of the cards
    for (const Card& card : hand) {
        std::cout << "| " << std::setw(2) << card.rank << "   | ";
    }
    std::cout << "\n";

    char suits[] = {3, 4, 5, 6}; // ♥ = 3, ♦ = 4, ♣ = 5, ♠ = 6 (ASCII values for card suits)

    // Print the suit in the middle of the cards
    for (const Card& card : hand) {
        std::string suitSymbol;
        if (card.suit == "Hearts")
        std::cout << "|  " << suits[0] << "   | ";
        else if (card.suit == "Diamonds") 
        std::cout << "|  " << suits[1] << "   | ";
        else if (card.suit == "Clubs") 
        std::cout << "|  " << suits[2] << "   | ";        
        else if (card.suit == "Spades") 
        std::cout << "|  " << suits[3] << "   | ";        
        else suitSymbol = " ";
    }
    std::cout << "\n";

    // Print the rank on the bottom of the cards
    for (const Card& card : hand) {
        std::cout << "|   " << std::setw(2) << card.rank << " | ";
    }
    std::cout << "\n";

    // Print the bottom border of the cards
    for (const Card& card : hand) {
        std::cout << "`------' ";
    }
    std::cout << "\n";
}

std::string Player::getName() const {
    return name;
}

std::vector<Card> Player::getHand() const {
    return hand;
}