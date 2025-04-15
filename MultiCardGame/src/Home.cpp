#include "Home.h"
#include "Blackjack.h"
#include "TeenPatti.h"
#include "Poker.h"
#include <iostream>
#include <string>

void Home::showMenu() {
    int choice;

    while (true) {
        std::cout << "=============================" << std::endl;
        std::cout << " Welcome to MultiCardGame! " << std::endl;
        std::cout << "=============================" << std::endl;
        std::cout << "1. Play Blackjack" << std::endl;
        std::cout << "2. Play Teen Patti" << std::endl;
        std::cout << "3. Play Poker (Texas Hold'em)" << std::endl;
        std::cout << "4. Exit" << std::endl;
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        if (choice == 1) {
            Blackjack blackjackGame;
            blackjackGame.startGame();
        } else if (choice == 2) {
            TeenPatti teenPattiGame;
            teenPattiGame.startGame();
        } else if (choice == 3) {
            std::string playerName;
            std::cout << "Enter your name: ";
            std::cin >> playerName;

            Poker pokerGame(playerName);
            pokerGame.startGame();
        } else if (choice == 4) {
            std::cout << "Thank you for playing! Goodbye!" << std::endl;
            break;
        } else {
            std::cout << "Invalid choice. Please try again." << std::endl;
        }
    }
}