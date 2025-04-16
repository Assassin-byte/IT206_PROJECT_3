# Explanation of MultiCardGame Project

The **MultiCardGame** project is a modular and versatile card game platform developed in C++. It provides a unified framework for playing multiple card games, such as Poker and Blackjack, with the potential to add more games seamlessly. Below is a detailed explanation of the project, its components, and its functionality.

---

## Objectives

The primary goals of the project include:
- **Modularity**: Simplify the process of adding or removing card games with minimal changes to the code.
- **Scalability**: Support multiple games and players efficiently.
- **User-Friendliness**: Deliver an intuitive user experience for both players and developers.

---

## Supported Games

### 1. **Poker**
- **Gameplay**: Poker is a strategy-based card game in which players aim to form the best hand or bluff their opponents into folding.
- **Implementation Details**:
  - Managed by `Poker.h` and `Poker.cpp`.
  - Includes hand ranking logic and a betting system.
  - Handles multiplayer scenarios (if applicable).
- **Key Features**:
  - Card dealing and hand evaluation.
  - Betting rounds and showdown.
  - Winning hand determination.

### 2. **Blackjack**
- **Gameplay**: Players try to achieve a hand value of 21 or as close as possible without exceeding it, while also beating the dealer's hand.
- **Implementation Details**:
  - Managed by `Blackjack.h` (status unclear as in-progress or completed).
  - Dealer AI handles its own cards based on predefined strategies.
- **Key Features**:
  - Player options: hit, stand, double down.
  - Automatic scoring and result evaluation.
  - Real-time feedback to players.

---

## Code Structure

The project is organized into modular components to ensure reusability and ease of maintenance. Below is a breakdown of the key files and their roles:

| File/Directory         | Purpose                                                                   |
|------------------------|---------------------------------------------------------------------------|
| `main.cpp`             | Entry point that manages game selection and the overall program flow.    |
| `Card.h` / `Card.cpp`  | Defines individual cards and their attributes, such as rank and suit.    |
| `Deck.h` / `Deck.cpp`  | Implements deck functionalities like shuffling and dealing cards.        |
| `GameBase.h`           | Serves as a base class for all card games to maintain consistency.       |
| `Poker.h` / `Poker.cpp`| Contains gameplay logic specific to Poker.                              |
| `Blackjack.h`          | Contains gameplay logic specific to Blackjack.                          |
| `utils/`               | A directory for helper functions (e.g., randomization, input validation).|

---

## Features

The MultiCardGame project is packed with features to enhance gameplay and simplify development:
- **Multiple Games**: Supports various card games in one program.
- **Modular Design**: Allows easy addition or removal of games.
- **Interactive Menus**: Provides user-friendly prompts for seamless interaction.
- **Randomization**: Implements shuffling and card distribution using robust algorithms.
- **Error Handling**: Manages invalid inputs and edge cases gracefully.
- **Cross-Platform Compatibility**: Runs on multiple platforms without additional setup.

---

## How It Works

### Step 1: Game Selection
When the program starts, users are presented with a menu to choose a game (e.g., Poker or Blackjack).

### Step 2: Gameplay
- For Poker: Players take turns betting and forming hands based on the game rules.
- For Blackjack: Players make decisions (hit, stand) to compete against the dealer.

### Step 3: Results
The program evaluates the outcome and displays the results, such as the winning hand in Poker or scores in Blackjack.

---

## Adding a New Game

The modular design of the project makes it easy to integrate additional games. Here’s a step-by-step guide:
1. **Create a New Game Class**:
   - Derive the new class from `GameBase.h`.
   - Implement the unique rules and mechanics of the game.
2. **Update `main.cpp`**:
   - Add the new game to the game selection menu.
   - Ensure the new class is correctly instantiated and managed.
3. **Test Thoroughly**:
   - Validate the new game’s functionality and ensure it integrates seamlessly with the existing framework.

---

## Setup Instructions

### Prerequisites
- A C++ compiler (e.g., GCC, Clang, or MSVC).
- CMake (optional, for build configuration).

### Steps to Run
1. Clone the repository:
   ```bash
   git clone https://github.com/Assassin-byte/IT206_PROJECT_3.git
   cd IT206_PROJECT_3
   ```
2. Compile the program:
   ```bash
   g++ main.cpp -o MultiCardGame
   ```
3. Run the program:
   ```bash
   ./MultiCardGame
   ```

---

## Conclusion

The **MultiCardGame** project stands out for its flexibility, scalability, and user-centric design. It serves as an excellent platform for developers to explore game development in C++ and for players to enjoy a variety of card games in one place.

For any questions or contributions, please refer to the [repository](https://github.com/Assassin-byte/IT206_PROJECT_3) or the [Contributing Guidelines](#contributing).
