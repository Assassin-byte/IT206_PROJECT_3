# Open Source Project Presentation: Blackjack and Teen Patti Game

## 1. Project Overview
This project implements two card games: **Blackjack** and **Teen Patti**. It is written in C++ and includes features such as player statistics, game mechanics, and file handling for saving/loading game states. The project demonstrates object-oriented programming principles and uses various data structures and algorithms to manage game logic.

### Key Features:
- **Blackjack**:
  - Player vs. Dealer gameplay.
  - Betting system with cash management.
  - Leaderboard for high scores.
  - Save and load game functionality.
- **Teen Patti**:
  - Multiplayer gameplay.
  - Card shuffling and dealing.
  - Winner determination based on card values.

---

## 2. Objectives
- To understand the implementation of card games using object-oriented programming.
- To analyze the design choices, data structures, and algorithms used in the project.
- To identify potential improvements or optimizations in the codebase.
- To contribute to the project by raising issues or suggesting enhancements.

---

## 3. Breadth-Wise Understanding of the Project
### Codebase Structure:
The project is divided into two main parts:
1. **Blackjack**:
   - Located in the `src` folder.
   - Includes classes like `Game`, `Player`, `Dealer`, `Deck`, and `Card`.
   - Implements game mechanics, player statistics, and file handling.
2. **Teen Patti**:
   - Located in the `TeenPatti` folder.
   - Includes classes like `Game`, `Player`, and `Deck`.
   - Focuses on multiplayer gameplay and winner determination.

### Key Components:
- **Card Class**:
  - Represents a playing card with attributes like rank, suit, and value.
- **Deck Class**:
  - Manages a collection of cards, including shuffling and dealing.
- **Player Class**:
  - Tracks player details such as name, hand, cash, and statistics.
- **Game Class**:
  - Implements the main game logic, including rounds, betting, and winner determination.

---

## 4. Depth-Wise Analysis
### 4.1 Approaches Taken:
- **Object-Oriented Design**:
  - Classes are used to encapsulate game logic and player data.
  - Inheritance is used for shared functionality (e.g., `Player` and `Dealer` inherit from `Human`).
- **File Handling**:
  - Binary files are used to save and load game states.
  - High scores are stored in a separate file for leaderboard functionality.
- **Randomization**:
  - Card shuffling is implemented using `std::random_shuffle` for randomness.

### 4.2 Data Structures Used:
- **Vectors**:
  - Used to store cards in the deck and player hands.
- **Strings**:
  - Used for player names and card ranks.
- **Custom Classes**:
  - `Card`, `Deck`, `Player`, and `Game` classes encapsulate specific functionalities.

### 4.3 Tradeoffs Made:
- **Randomization**:
  - `std::random_shuffle` is used, which is deprecated in modern C++ standards. A better alternative would be `std::shuffle` with a random number generator.
- **File Handling**:
  - Binary files are used for simplicity, but they lack portability and readability compared to text-based formats like JSON or XML.
- **Game Logic**:
  - The game logic is tightly coupled with the `Game` class, making it harder to extend or reuse components independently.

---

## 5. Findings and Suggestions
### Strengths:
- Clear and modular code structure.
- Effective use of object-oriented programming principles.
- Comprehensive implementation of game mechanics.

### Areas for Improvement:
1. **Modernization**:
   - Replace `std::random_shuffle` with `std::shuffle` for better compatibility with modern C++ standards.
2. **Error Handling**:
   - Add more robust error handling for file operations and invalid inputs.
3. **Code Reusability**:
   - Decouple game logic from the `Game` class to improve reusability and testability.
4. **Documentation**:
   - Add comments and documentation for better code readability and maintainability.

---

## 6. Contribution
### Potential Contributions:
- Raise an issue to replace `std::random_shuffle` with `std::shuffle`.
- Suggest improvements in file handling and error handling.
- Create a pull request to refactor the `Game` class for better modularity.

---

## 7. Presentation
### Markdown Presentation:
This document serves as the markdown presentation for the project. It includes an overview, objectives, analysis, and findings.

---

## 8. Q&A Preparation
### Sample Questions:
1. **Breadth-Wise**:
   - What are the main components of the project, and how do they interact?
   - How is the deck of cards managed in the game?
2. **Depth-Wise**:
   - What data structures are used to store player hands and the deck?
   - How does the project handle randomization for card shuffling?
3. **Tradeoffs**:
   - Why was binary file handling chosen over text-based formats?
   - What are the limitations of the current implementation?

---

## 9. Submission
- **Finalization of Project**: Completed.
- **Markdown Presentation**: Prepared.
- **Potential Contributions**: Identified.

---

Save this content as a `.md` file (e.g., `Project_Presentation.md`) and submit it as required. Let me know if you need further assistance!