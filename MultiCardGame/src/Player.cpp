#include "Player.h"
#include <iostream>
#include <iomanip>

Player::Player(const std::string& playerName) : name(playerName) {}

void Player::addCard(const Card& card) {
    hand.push_back(card);
}

void Player::showHand() const {
    std::cout << "\nCards of " << name << " are:\n";

    for (const Card& card : hand) {
        std::cout << ".------. ";
    }
    std::cout << "\n";

    for (const Card& card : hand) {
        std::cout << "| " << std::setw(2) << card.getRank() << "   | ";
    }
    std::cout << "\n";

    for (const Card& card : hand) {
        std::cout << "|  " << card.getSuit() << "   | ";
    }
    std::cout << "\n";

    for (const Card& card : hand) {
        std::cout << "|   " << std::setw(2) << card.getRank() << " | ";
    }
    std::cout << "\n";

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

void Player::clearHand() {
    hand.clear();
}

int Player::getHandValue() const {
    int totalValue = 0;
    int aceCount = 0;

    for (const Card& card : hand) {
        int value = card.getValue();
        if (value == 1) { // Ace
            aceCount++;
            value = 11; // Default to 11
        }
        totalValue += value;
    }

    // Adjust for Aces if total value exceeds 21
    while (totalValue > 21 && aceCount > 0) {
        totalValue -= 10;
        aceCount--;
    }

    return totalValue;
}