# Comprehensive Documentation for Blackjack and Teen Patti Games

---

## **Table of Contents**
1. [Introduction](#introduction)
2. [Blackjack Game](#blackjack-game)
   - [Overview](#overview)
   - [Class Breakdown](#class-breakdown)
     - [Card Class](#card-class)
     - [Deck Class](#deck-class)
     - [Human Class](#human-class)
     - [Player Class](#player-class)
     - [Dealer Class](#dealer-class)
     - [Game Class](#game-class)
   - [How the Game Works](#how-the-game-works)
3. [Teen Patti Game](#teen-patti-game)
   - [Overview](#overview-1)
   - [Class Breakdown](#class-breakdown-1)
     - [Card Class](#card-class-1)
     - [Deck Class](#deck-class-1)
     - [Player Class](#player-class-1)
     - [Game Class](#game-class-1)
   - [How the Game Works](#how-the-game-works-1)
4. [Common Concepts](#common-concepts)
   - [Object-Oriented Programming (OOP)](#object-oriented-programming-oop)
   - [File Handling](#file-handling)
   - [Randomization](#randomization)
5. [Conclusion](#conclusion)

---

## **Introduction**
This document provides a detailed explanation of the codebase for two card games: **Blackjack** and **Teen Patti**. Both games are implemented in C++ and demonstrate the use of object-oriented programming (OOP) principles such as encapsulation, inheritance, and polymorphism.

---

## **Blackjack Game**

### **Overview**
Blackjack is a popular card game where the goal is to beat the dealer by having a hand value as close to 21 as possible without exceeding it. The game includes features like betting, saving/loading game states, and a leaderboard.

---

### **Class Breakdown**

#### **1. Card Class**

| **Attribute**   | **Type**   | **Description**                                      |
|------------------|------------|------------------------------------------------------|
| `number`         | `int`      | The numeric value of the card (e.g., 1 for Ace).     |
| `suit`           | `char`     | The suit of the card (e.g., 'H' for Hearts).         |
| `block`          | `bool`     | Used for Ace switching between 1 and 11.            |

| **Function**         | **Description**                                              |
|-----------------------|--------------------------------------------------------------|
| `Card()`             | Default constructor.                                         |
| `Card(int no, char s)`| Parameterized constructor.                                  |
| `int getNumber()`     | Returns the card's number.                                  |
| `char getSuit()`      | Returns the card's suit.                                    |
| `void setNumber(int)` | Sets the card's number.                                     |
| `void setSuit(char)`  | Sets the card's suit.                                       |
| `char getPrintNumber()`| Returns the printable character for the card's number.     |

---

#### **2. Deck Class**

| **Attribute**   | **Type**               | **Description**                          |
|------------------|------------------------|------------------------------------------|
| `deck`          | `std::vector<Card>`    | A vector containing all the cards.       |

| **Function**         | **Description**                                              |
|-----------------------|--------------------------------------------------------------|
| `void initializeDeck()`| Initializes the deck with 52 cards.                        |
| `int getSize()`       | Returns the number of cards in the deck.                    |
| `Card deal()`         | Deals a card from the deck.                                 |

---

#### **3. Human Class**

| **Attribute**   | **Type**               | **Description**                          |
|------------------|------------------------|------------------------------------------|
| `hand`          | `std::vector<Card>`    | The cards in the player's hand.          |
| `sum`           | `int`                 | The total value of the player's hand.    |

| **Function**         | **Description**                                              |
|-----------------------|--------------------------------------------------------------|
| `int getSum()`       | Returns the total value of the player's hand.                |
| `void switchAce()`   | Adjusts the value of an Ace if the total exceeds 21.         |
| `void addCard(Card)` | Adds a card to the player's hand.                            |
| `void clearCards()`  | Clears the player's hand.                                    |

---

#### **4. Player Class**

| **Attribute**   | **Type**               | **Description**                          |
|------------------|------------------------|------------------------------------------|
| `name`          | `std::string`          | The player's name.                       |
| `cash`          | `int`                 | The player's current cash.               |
| `bet`           | `int`                 | The player's current bet.                |
| `wins`          | `int`                 | The number of games the player has won.  |
| `loses`         | `int`                 | The number of games the player has lost. |

| **Function**         | **Description**                                              |
|-----------------------|--------------------------------------------------------------|
| `std::string getName()`| Returns the player's name.                                 |
| `int getCash()`       | Returns the player's cash.                                  |
| `void setBet(int)`    | Sets the player's bet.                                      |
| `void addCash(int)`   | Adds cash to the player's total.                            |
| `void incrementWins()`| Increments the player's win count.                         |
| `void incrementLoses()`| Increments the player's lose count.                        |

---

#### **5. Dealer Class**

| **Function**         | **Description**                                              |
|-----------------------|--------------------------------------------------------------|
| `void printFirstCard()`| Prints the dealer's first card while hiding the second.     |

---

#### **6. Game Class**

| **Attribute**   | **Type**               | **Description**                          |
|------------------|------------------------|------------------------------------------|
| `player`        | `Player`               | The user playing the game.               |
| `dealer`        | `Dealer`               | The dealer in the game.                  |
| `deck`          | `Deck`                 | The deck of cards.                       |

| **Function**         | **Description**                                              |
|-----------------------|--------------------------------------------------------------|
| `void beginGame()`   | Starts the game.                                             |
| `bool startBet()`    | Handles the betting process.                                 |
| `bool startGame()`   | Handles the main game loop.                                  |
| `void saveGame()`    | Saves the game state to a file.                              |
| `void loadGame()`    | Loads the game state from a file.                            |

---

### **How the Game Works**
1. The player places a bet.
2. Both the player and the dealer are dealt two cards.
3. The player can choose to "Hit" (draw another card) or "Stand" (end their turn).
4. The dealer draws cards until their hand value is at least 17.
5. The winner is determined based on the hand values.

---

## **Teen Patti Game**

### **Overview**
Teen Patti is a popular Indian card game similar to poker. The goal is to have the best three-card hand among the players.

---

### **Class Breakdown**

#### **1. Card Class**

| **Attribute**   | **Type**               | **Description**                          |
|------------------|------------------------|------------------------------------------|
| `rank`          | `std::string`          | The rank of the card (e.g., "A", "K").   |
| `suit`          | `std::string`          | The suit of the card (e.g., "Hearts").   |
| `value`         | `int`                 | The numeric value of the card.           |

---

#### **2. Deck Class**

| **Attribute**   | **Type**               | **Description**                          |
|------------------|------------------------|------------------------------------------|
| `cards`         | `std::vector<Card>`    | A vector containing all the cards.       |

| **Function**         | **Description**                                              |
|-----------------------|--------------------------------------------------------------|
| `void shuffle()`     | Shuffles the deck.                                           |
| `Card dealCard()`    | Deals a card from the deck.                                  |

---

#### **3. Player Class**

| **Attribute**   | **Type**               | **Description**                          |
|------------------|------------------------|------------------------------------------|
| `name`          | `std::string`          | The player's name.                       |
| `hand`          | `std::vector<Card>`    | The player's hand.                       |

| **Function**         | **Description**                                              |
|-----------------------|--------------------------------------------------------------|
| `void addCard(const Card&)`| Adds a card to the player's hand.                      |
| `void showHand() const`| Displays the player's hand.                                |

---

#### **4. Game Class**

| **Attribute**   | **Type**               | **Description**                          |
|------------------|------------------------|------------------------------------------|
| `deck`          | `Deck`                 | The deck of cards.                       |
| `player1`       | `Player`               | The first player.                        |
| `player2`       | `Player`               | The second player.                       |

| **Function**         | **Description**                                              |
|-----------------------|--------------------------------------------------------------|
| `void playRound()`   | Plays a single round of the game.                            |
| `void startGame(int)`| Starts the game for a specified number of rounds.            |

---

### **How the Game Works**
1. Each player is dealt three cards.
2. The hands are compared to determine the winner.
3. The game continues for a specified number of rounds.

---

## **Common Concepts**

### **Object-Oriented Programming (OOP)**
- **Encapsulation**: Each class encapsulates its data and functionality.
- **Inheritance**: The `Player` and `Dealer` classes inherit from the `Human` class.
- **Polymorphism**: Functions like `addCard` behave differently for different objects.

---

### **File Handling**
- Binary files are used to save and load game states.
- Example:
  - `saveGame()`: Writes the player's data to a file.
  - `loadGame()`: Reads the player's data from a file.

---

### **Randomization**
- `std::random_shuffle` is used to shuffle the deck of cards.
- Note: `std::random_shuffle` is deprecated and can be replaced with `std::shuffle`.

---

## **Conclusion**
This document provides a comprehensive understanding of the codebase for both games. By studying the classes, their attributes, and member functions, you can gain insights into how the games are implemented and how to extend or modify them.

---