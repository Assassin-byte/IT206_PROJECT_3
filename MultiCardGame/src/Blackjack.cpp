#include "Blackjack.h"
#include "Dealer.h"
#include <iostream>

Blackjack::Blackjack() : player("Player"), dealer("Dealer") {
    deck.initializeDeck();
    deck.shuffle();
}

void Blackjack::startGame() {
    std::cout << "Starting Blackjack Game!\n";

    // Deal initial cards
    player.clearHand();
    dealer.clearHand();
    player.addCard(deck.dealCard());
    player.addCard(deck.dealCard());
    dealer.addCard(deck.dealCard());
    dealer.addCard(deck.dealCard());

    // Show player's hand
    std::cout << "\nYour Hand:\n";
    player.showHand();

    // Dealer's first card
    dealer.showFirstCard();

    // Player's turn
    char choice;
    while (true) {
        std::cout << "\nDo you want to (H)it or (S)tand? ";
        std::cin >> choice;
        if (choice == 'H' || choice == 'h') {
            player.addCard(deck.dealCard());
            player.showHand();
            if (player.getHandValue() > 21) {
                std::cout << "\nYou busted! Dealer wins.\n";
                return;
            }
        } else if (choice == 'S' || choice == 's') {
            break;
        } else {
            std::cout << "Invalid choice. Try again.\n";
        }
    }

    // Dealer's turn
    std::cout << "\nDealer's Turn:\n";
    dealer.showHand();
    while (dealer.getHandValue() < 17) {
        dealer.addCard(deck.dealCard());
        dealer.showHand();
    }

    // Determine winner
    if (dealer.getHandValue() > 21 || player.getHandValue() > dealer.getHandValue()) {
        std::cout << "\nYou win!\n";
    } else if (dealer.getHandValue() > player.getHandValue()) {
        std::cout << "\nDealer wins!\n";
    } else {
        std::cout << "\nIt's a draw!\n";
    }
}