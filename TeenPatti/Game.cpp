#include "Game.h"
#include <algorithm>
#include <iostream>

Game::Game(const std::string& name1, const std::string& name2)
    : player1(name1), player2(name2) {
    deck.shuffle();
}

std::string Game::determineWinner(const std::vector<Card>& hand1, const std::vector<Card>& hand2) {
    std::vector<Card> sorted1 = hand1, sorted2 = hand2;
    std::sort(sorted1.begin(), sorted1.end(), [](const Card& a, const Card& b) { return a.value > b.value; });
    std::sort(sorted2.begin(), sorted2.end(), [](const Card& a, const Card& b) { return a.value > b.value; });

    for (int i = 0; i < 3; i++) {
        if (sorted1[i].value > sorted2[i].value) {
            return player1.getName();
        } else if (sorted2[i].value > sorted1[i].value) {
            return player2.getName();
        }
    }
    return "Draw";
}

void Game::playRound() {
    player1 = Player(player1.getName());
    player2 = Player(player2.getName());

    for (int i = 0; i < 3; i++) {
        player1.addCard(deck.dealCard());
        player2.addCard(deck.dealCard());
    }

    player1.showHand();
    player2.showHand();

    std::string winner = determineWinner(player1.getHand(), player2.getHand());
    if (winner == "Draw") {
        std::cout << "\nThis round is a Draw!" << std::endl;
    } else {
        std::cout << "\nWinner of this round: " << winner << std::endl;
    }
}

void Game::startGame(int rounds) {
    for (int i = 1; i <= rounds; i++) {
        std::cout << "\n--- Round " << i << " ---\n";
        playRound();

        // Ask the user if they want to continue to the next round
        if (i < rounds) { // Only ask if it's not the last round
            char choice;
            std::cout << "\nDo you want to proceed to the next round? (y/n): ";
            std::cin >> choice;

            if (choice == 'n' || choice == 'N') {
                std::cout << "\nGame ended early by the players.\n";
                break;
            }
        }
    }
}