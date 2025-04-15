#include "TeenPatti.h"
#include <iostream>

TeenPatti::TeenPatti() : player1("Player 1"), player2("Player 2") {
    deck.initializeDeck();
    deck.shuffle();
}

void TeenPatti::startGame() {
    std::cout << "Starting Teen Patti Game!\n";

    // Deal cards to players
    player1.clearHand();
    player2.clearHand();
    for (int i = 0; i < 3; i++) {
        player1.addCard(deck.dealCard());
        player2.addCard(deck.dealCard());
    }

    // Show hands
    std::cout << "\nPlayer 1's Hand:\n";
    player1.showHand();
    std::cout << "\nPlayer 2's Hand:\n";
    player2.showHand();

    // Determine winner
    int player1Value = player1.getHandValue();
    int player2Value = player2.getHandValue();
    if (player1Value > player2Value) {
        std::cout << "\nPlayer 1 wins!\n";
    } else if (player2Value > player1Value) {
        std::cout << "\nPlayer 2 wins!\n";
    } else {
        std::cout << "\nIt's a draw!\n";
    }
}