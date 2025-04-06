#include <iostream>
#include <vector>
#include <string>
#include <windows.h> // For SetConsoleOutputCP

// Define a structure to represent a card
struct Card {
    std::string rank;
    std::string suit;
};

// Function to generate a deck of cards
std::vector<Card> generateDeck() {
    // Define the ranks and suits
    std::vector<std::string> ranks = {"A", "2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K"};
    std::vector<std::string> suits = {"♥", "♦", "♣", "♠"}; // Hearts, Diamonds, Clubs, Spades

    // Create the deck
    std::vector<Card> deck;
    for (const auto& suit : suits) {
        for (const auto& rank : ranks) {
            deck.push_back({rank, suit});
        }
    }
    return deck;
}

// Function to display the deck
void displayDeck(const std::vector<Card>& deck) {
    for (const auto& card : deck) {
        std::cout << card.rank << card.suit << " ";
    }
    std::cout << std::endl;
}

// Function to print a single card
void printCard(const std::string& rank, const std::string& suit) {
    std::string topBottomBorder = "+---------+";
    std::string emptyLine = "|         |";

    std::cout << topBottomBorder << std::endl;
    std::cout << "| " << rank << "       |" << std::endl;
    std::cout << emptyLine << std::endl;
    std::cout << "|    " << suit << "    |" << std::endl;
    std::cout << emptyLine << std::endl;
    std::cout << "|       " << rank << " |" << std::endl;
    std::cout << topBottomBorder << std::endl;
}

int main() {
    // Set console output to UTF-8
    SetConsoleOutputCP(CP_UTF8);

    // Generate the deck
    std::vector<Card> deck = generateDeck();

    // Display the deck
    std::cout << "Generated Deck of Cards:" << std::endl;
    displayDeck(deck);

    // Example: Print the Ace of Spades
    std::string rank = "A";
    std::string suit = "♠"; // Spade symbol
    printCard(rank, suit);

    return 0;
}