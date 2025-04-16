# MultiCardGame

The **MultiCardGame** is an engaging and modular card game project written entirely in C++. It supports multiple card games within a single framework, offering flexibility and scalability for players and developers alike.

---

## Table of Contents
1. [Overview](#overview)
2. [Features](#features)
3. [How to Play](#how-to-play)
4. [Code Structure](#code-structure)
5. [Setup Instructions](#setup-instructions)
6. [Contributing](#contributing)
7. [License](#license)

---

## Overview

The **MultiCardGame** project is designed to provide a unified platform for playing various card games. Whether you're a fan of Poker, Solitaire, or Blackjack, this project aims to make it easy to play and even add new games to the framework.

### Objectives
- **Modularity**: Add or remove card games with minimal effort.
- **Scalability**: Handle multiple card games and players seamlessly.
- **User-Friendly**: Provide an intuitive interface for users and developers.

---

## Features

| Feature                | Description                                                                 |
|------------------------|-----------------------------------------------------------------------------|
| **Multiple Games**     | Supports different card games within a single program.                     |
| **Modular Design**     | Easily extendable to include new games.                                    |
| **User Interaction**   | Interactive menus and prompts for a seamless user experience.              |
| **Randomization**      | Implements shuffling and random card distribution using robust algorithms. |
| **Error Handling**     | Includes mechanisms to handle invalid inputs and edge cases gracefully.    |
| **Cross-Platform**     | Runs on multiple platforms with no additional configuration.               |

---

## How to Play

### Step 1: Choose a Game
When you run the program, you will be prompted to select a card game from the available options (e.g., Poker, Blackjack).

### Step 2: Follow the Instructions
Each game has its own set of rules and instructions, which are displayed when you select the game.

### Step 3: Enjoy!
Play the game, interact with the menus, and have fun!

---

## Code Structure

The codebase of **MultiCardGame** is organized as follows:

| File/Directory         | Description                                                                 |
|------------------------|-----------------------------------------------------------------------------|
| `main.cpp`             | Entry point of the program. Handles game selection and overall flow.       |
| `Card.h` / `Card.cpp`  | Represents individual cards and their properties (e.g., rank, suit).       |
| `Deck.h` / `Deck.cpp`  | Implements the deck of cards, including shuffling and dealing functionality.|
| `GameBase.h`           | Base class for all card games to ensure modularity and consistency.        |
| `Poker.h` / `Poker.cpp`| Implements the logic for Poker.                                            |
| `Blackjack.h`          | Implements the logic for Blackjack (in progress or completed).             |
| `utils/`               | Contains helper functions for input validation, randomization, etc.        |

---

## Setup Instructions

### Prerequisites
- A C++ compiler (e.g., GCC, Clang, or MSVC)
- CMake (optional, for build configuration)

### Steps to Run
1. Clone the repository:
   ```bash
   git clone https://github.com/Assassin-byte/IT206_PROJECT_3.git
   cd IT206_PROJECT_3
