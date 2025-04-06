#include "game.h"
#include "cards.h"
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

Game::Game() {
    srand(static_cast<unsigned int>(time(0)));
}

void Game::startGame() {
    cout << "Welcome to Teen Patti!" << endl;
    // Initialize players and deck
    // Additional setup code can be added here
}

void Game::playRound() {
    cout << "Playing a round..." << endl;
    // Logic for playing a round of Teen Patti
    // Deal cards, compare hands, etc.
}

void Game::determineWinner() {
    cout << "Determining the winner..." << endl;
    // Logic to determine the winner based on the players' hands
    // Announce the winner
}