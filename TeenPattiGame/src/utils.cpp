#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <ctime>

using namespace std;

// Function to shuffle a deck of cards
void shuffleDeck(vector<int>& deck) {
    unsigned seed = static_cast<unsigned>(time(0));
    shuffle(deck.begin(), deck.end(), default_random_engine(seed));
}

// Function to display a message to the player
void displayMessage(const string& message) {
    cout << message << endl;
}