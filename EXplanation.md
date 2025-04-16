# **BlackJack & TeenPatti**

---

## **Introduction**

The **BlackJack** and **TeenPatti** projects are C++ implementations of two popular card games. These projects demonstrate the application of **object-oriented programming (OOP)** principles, such as **inheritance**, **encapsulation**, and **polymorphism**, to create modular, reusable, and interactive games.

This document provides a detailed explanation of the **BlackJack** and **TeenPatti** directories, covering their structure, functionality, and logic. By the end of this document, you will have a complete understanding of how these games are implemented and how they work.

---

## **1. Codebase Overview**

The project is organized into two main directories:

### **1.1 BlackJack Directory**
The **BlackJack** directory contains the implementation of the classic casino game where the player competes against the dealer to achieve a hand value as close to 21 as possible without exceeding it.

**Key Features:**
- Player vs. Dealer gameplay.
- Betting system with cash management.
- Save and load functionality for game progress.
- Leaderboard to track high scores.

**Key Classes:**
| Class        | Description                                                                 |
|--------------|-----------------------------------------------------------------------------|
| `Card`       | Represents a playing card with attributes like rank, suit, and value.      |
| `Deck`       | Manages a collection of cards, including shuffling and dealing.            |
| `Human`      | Base class for `Player` and `Dealer`, managing the hand and card operations.|
| `Player`     | Extends `Human` to include player-specific attributes like cash and stats. |
| `Dealer`     | Extends `Human` to include dealer-specific behavior, such as hiding cards. |
| `Game`       | Implements the main game logic, including betting, card dealing, and winner determination. |

---

### **1.2 TeenPatti Directory**
The **TeenPatti** directory contains the implementation of the popular Indian card game where players compete to have the best three-card hand.

**Key Features:**
- Multiplayer gameplay with two players.
- Card shuffling and dealing.
- Winner determination based on hand rankings.

**Key Classes:**
| Class        | Description                                                                 |
|--------------|-----------------------------------------------------------------------------|
| `Card`       | Represents a playing card with attributes like rank, suit, and value.      |
| `Deck`       | Manages a collection of cards, including shuffling and dealing.            |
| `Player`     | Tracks player details such as name and hand.                               |
| `Game`       | Implements the main game logic, including rounds and winner determination. |

---

## **2. BlackJack Code Structure**

### **2.1 Class Breakdown**

#### **Card Class**
The `Card` class represents a single playing card.

| **Attributes** | **Type**   | **Description**                                      |
|----------------|------------|------------------------------------------------------|
| `number`       | `int`      | Numeric value of the card (e.g., 1 for Ace).         |
| `suit`         | `char`     | Suit of the card (e.g., 'H' for Hearts).             |
| `block`        | `bool`     | Used for Ace switching between 1 and 11.             |

| **Methods**         | **Description**                                              |
|---------------------|--------------------------------------------------------------|
| `Card()`            | Default constructor.                                         |
| `Card(int no, char s)` | Parameterized constructor.                                |
| `getNumber()`       | Returns the card's number.                                   |
| `getSuit()`         | Returns the card's suit.                                     |
| `setNumber(int)`    | Sets the card's number.                                      |
| `setSuit(char)`     | Sets the card's suit.                                        |
| `getPrintNumber()`  | Returns the printable character for the card's number.       |

---

#### **Deck Class**
The `Deck` class manages a collection of cards.

| **Attributes** | **Type**               | **Description**                          |
|----------------|------------------------|------------------------------------------|
| `deck`         | `std::vector<Card>`    | A vector containing all the cards.       |

| **Methods**         | **Description**                                              |
|---------------------|--------------------------------------------------------------|
| `initializeDeck()`  | Initializes the deck with 52 cards.                          |
| `getSize()`         | Returns the number of cards in the deck.                     |
| `deal()`            | Deals a card from the deck.                                  |

---

#### **Human Class**
The `Human` class is a base class for `Player` and `Dealer`.

| **Attributes** | **Type**               | **Description**                          |
|----------------|------------------------|------------------------------------------|
| `hand`         | `std::vector<Card>`    | The cards in the player's or dealer's hand. |
| `sum`          | `int`                 | The total value of the hand.             |

| **Methods**         | **Description**                                              |
|---------------------|--------------------------------------------------------------|
| `getSum()`          | Returns the total value of the hand.                         |
| `switchAce()`       | Adjusts the value of an Ace if the total exceeds 21.         |
| `addCard(Card)`     | Adds a card to the hand.                                     |
| `clearCards()`      | Clears the hand.                                             |
| `printCards()`      | Prints the cards in the hand.                                |

---

#### **Player Class**
The `Player` class extends `Human` and adds player-specific attributes.

| **Attributes** | **Type**               | **Description**                          |
|----------------|------------------------|------------------------------------------|
| `name`         | `std::string`          | The player's name.                       |
| `cash`         | `int`                 | The player's current cash.               |
| `bet`          | `int`                 | The player's current bet.                |
| `wins`         | `int`                 | The number of games the player has won.  |
| `loses`        | `int`                 | The number of games the player has lost. |

| **Methods**         | **Description**                                              |
|---------------------|--------------------------------------------------------------|
| `getName()`         | Returns the player's name.                                   |
| `getCash()`         | Returns the player's cash.                                   |
| `setBet(int)`       | Sets the player's bet.                                       |
| `addCash(int)`      | Adds cash to the player's total.                             |
| `incrementWins()`   | Increments the player's win count.                           |
| `incrementLoses()`  | Increments the player's lose count.                          |

---

#### **Dealer Class**
The `Dealer` class extends `Human` and adds dealer-specific behavior.

| **Methods**         | **Description**                                              |
|---------------------|--------------------------------------------------------------|
| `printFirstCard()`  | Prints the dealer's first card while hiding the second.       |

---

#### **Game Class**
The `Game` class implements the main game logic.

| **Attributes** | **Type**               | **Description**                          |
|----------------|------------------------|------------------------------------------|
| `player`       | `Player`               | The user playing the game.               |
| `dealer`       | `Dealer`               | The dealer in the game.                  |
| `deck`         | `Deck`                 | The deck of cards.                       |

| **Methods**         | **Description**                                              |
|---------------------|--------------------------------------------------------------|
| `beginGame()`       | Starts the game.                                             |
| `startBet()`        | Handles the betting process.                                 |
| `startGame()`       | Handles the main game loop.                                  |
| `saveGame()`        | Saves the game state to a file.                              |
| `loadGame()`        | Loads the game state from a file.                            |

---

## **3. TeenPatti Code Structure**

### **3.1 Class Breakdown**

#### **Card Class**
The `Card` class represents a single playing card.

| **Attributes** | **Type**               | **Description**                          |
|----------------|------------------------|------------------------------------------|
| `rank`         | `std::string`          | The rank of the card (e.g., "A", "K").   |
| `suit`         | `std::string`          | The suit of the card (e.g., "Hearts").   |
| `value`        | `int`                 | The numeric value of the card.           |

---

#### **Deck Class**
The `Deck` class manages a collection of cards.

| **Attributes** | **Type**               | **Description**                          |
|----------------|------------------------|------------------------------------------|
| `cards`        | `std::vector<Card>`    | A vector containing all the cards.       |

| **Methods**         | **Description**                                              |
|---------------------|--------------------------------------------------------------|
| `shuffle()`         | Shuffles the deck.                                           |
| `dealCard()`        | Deals a card from the deck.                                  |

---

#### **Player Class**
The `Player` class tracks player details.

| **Attributes** | **Type**               | **Description**                          |
|----------------|------------------------|------------------------------------------|
| `name`         | `std::string`          | The player's name.                       |
| `hand`         | `std::vector<Card>`    | The player's hand.                       |

| **Methods**         | **Description**                                              |
|---------------------|--------------------------------------------------------------|
| `addCard(const Card&)` | Adds a card to the player's hand.                         |
| `showHand() const`  | Displays the player's hand.                                  |

---

#### **Game Class**
The `Game` class implements the main game logic.

| **Attributes** | **Type**               | **Description**                          |
|----------------|------------------------|------------------------------------------|
| `deck`         | `Deck`                 | The deck of cards.                       |
| `player1`      | `Player`               | The first player.                        |
| `player2`      | `Player`               | The second player.                       |

| **Methods**         | **Description**                                              |
|---------------------|--------------------------------------------------------------|
| `playRound()`       | Plays a single round of the game.                            |
| `startGame(int)`    | Starts the game for a specified number of rounds.            |

---

## **4. Call Flow**

### **BlackJack**
1. **`main()`**:
   - Initializes the `Game` object.
   - Calls `Game::beginMenu()` to display the main menu.
2. **`Game::beginMenu()`**:
   - Displays the menu options and calls the appropriate methods based on user input.
3. **`Game::beginGame()`**:
   - Handles the main game loop, including betting, dealing cards, and determining the winner.

---

### **TeenPatti**
1. **`main()`**:
   - Initializes the `Game` object.
   - Calls `Game::startGame()` to begin the game.
2. **`Game::startGame()`**:
   - Handles multiple rounds of gameplay.
   - Calls `Game::playRound()` for each round.
3. **`Game::playRound()`**:
   - Deals cards to players and determines the winner of the round.

---

## **5. How to Run**

### **Prerequisites**
- A C++ compiler (e.g., GCC, Clang, or MSVC).
- A terminal or command prompt to execute commands.

### **Steps to Compile and Run**
1. Clone the repository:
   ```bash
   git clone https://github.com/Assassin-byte/IT206_PROJECT_3.git
   cd IT206_PROJECT_3

2. **Compile the Code**:
---
- For BlackJack:
   ```bash
   g++ BlackJack/*.cpp -o BlackJackGame

   ```
+---
+ For TeenPatti:
   ```bash
   g++ TeenPatti/*.cpp -o TeenPattiGame


3. **Run the Game**:
   ```bash
   ./BlackJackGame
   ./TeenPattiGame

   ```

---
   
## **6. Conclusion**
The BlackJack and TeenPatti implementations in this project demonstrate the power of object-oriented programming to create modular and reusable code. By understanding the structure and functionality of these games, you can extend or modify the project to include additional features or games.

```
