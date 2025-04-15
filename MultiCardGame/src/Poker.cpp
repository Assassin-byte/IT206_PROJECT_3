#include "Poker.h"
#include <iostream>
#include <algorithm>

Poker::Poker(const std::string& playerName)
    : humanPlayer(playerName) {
    // Initialize the deck and shuffle it
    deck.initializeDeck();
    deck.shuffle();

    // Create four bots
    for (int i = 1; i <= 4; i++) {
        bots.emplace_back("Bot " + std::to_string(i));
    }
}

void Poker::dealInitialCards() {
    // Deal two cards to each player (human and bots)
    for (int i = 0; i < 2; i++) {
        humanPlayer.addCard(deck.dealCard());
        for (auto& bot : bots) {
            bot.addCard(deck.dealCard());
        }
    }
}

void Poker::dealCommunityCards() {
    // Deal five community cards (flop, turn, river)
    for (int i = 0; i < 5; i++) {
        communityCards.push_back(deck.dealCard());
    }
}

void Poker::showCommunityCards() const {
    std::cout << "\nCommunity Cards:\n";
    for (const auto& card : communityCards) {
        card.printCard();
        std::cout << " ";
    }
    std::cout << "\n";
}

std::string Poker::determineWinner() {
    // For simplicity, the winner is determined by the highest card value
    int highestValue = 0;
    std::string winner = humanPlayer.getName();

    // Check human player's hand
    for (const auto& card : humanPlayer.getHand()) {
        if (card.getValue() > highestValue) {
            highestValue = card.getValue();
            winner = humanPlayer.getName();
        }
    }

    // Check bots' hands
    for (const auto& bot : bots) {
        for (const auto& card : bot.getHand()) {
            if (card.getValue() > highestValue) {
                highestValue = card.getValue();
                winner = bot.getName();
            }
        }
    }

    return winner;
}

void Poker::startGame() {
    std::cout << "Starting Poker (Texas Hold'em) Game!\n";

    // Deal initial cards
    dealInitialCards();

    // Show human player's hand
    std::cout << "\nYour Hand:\n";
    humanPlayer.showHand();

    // Deal community cards
    dealCommunityCards();
    showCommunityCards();

    // Determine the winner
    std::string winner = determineWinner();
    std::cout << "\nThe winner is: " << winner << "!\n";
}