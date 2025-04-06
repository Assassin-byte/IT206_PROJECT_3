#include "Game.h"
#include <iostream>

int main() {
    std::string name1, name2;
    std::cout << "Enter the name of Player 1: ";
    std::cin >> name1;
    std::cout << "Enter the name of Player 2: ";
    std::cin >> name2;

    Game game(name1, name2);
    game.startGame(3);

    return 0;
}