#include "Home.h"
#include "Blackjack.h"
#include "TeenPatti.h"
#include "Poker.h"
#include <iostream>
#include <string>
#include <iomanip>

// Function to center-align text
void printCentered(const std::string& text, int width = 80) {
    int padding = (width - text.length()) / 2;
    if (padding > 0) {
        std::cout << std::string(padding, ' '); // Add padding spaces
    }
    std::cout << text << std::endl;
}

void Home::showMenu() {
    const std::string teal = "\033[36m"; // ANSI escape code for teal color
    const std::string reset = "\033[0m"; // Reset color

    int choice;

    while (true) {
        std::cout << teal;
        printCentered("==========================================================");
        printCentered("Welcome to MultiCardGame!");
        printCentered("==========================================================");
        printCentered("1. Play Blackjack");
        printCentered("2. Play Teen Patti");
        printCentered("3. Play Poker (Texas Hold'em)");
        printCentered("4. Exit");
        printf("\n");
        printCentered("==========================================================");

        std::cout << reset;

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