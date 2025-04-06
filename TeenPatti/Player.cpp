#include "Player.h"
#include <iostream>

Player::Player(const std::string& playerName) : name(playerName) {}

void Player::addCard(const Card& card) {
    hand.push_back(card);
}

void Player::showHand() const {
    std::cout << "\nCards of " << name << " are:\n";
    for (const Card& card : hand) {
        std::cout << card.rank << " of " << card.suit << std::endl;
    }
}

std::string Player::getName() const {
    return name;
}

std::vector<Card> Player::getHand() const {
    return hand;
}