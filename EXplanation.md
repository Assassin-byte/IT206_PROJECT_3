# **Open Source Project Presentation: Blackjack and Teen Patti Game**

---

## **Welcome!**

Hello everyone, and thank you for joining me today! I’m excited to present our open-source project: **Blackjack and Teen Patti Game**. This project is a **C++ implementation** of two popular card games, showcasing the power of **object-oriented programming (OOP)** principles to create an engaging, interactive, and feature-rich gaming experience.

This presentation will walk you through the project’s design, implementation, and findings. By the end, you’ll have a clear understanding of how the project works, the approaches taken, and areas for improvement.

---

## **1. Project Overview**

### **What is the Project About?**
This project implements two classic card games—**Blackjack** and **Teen Patti**—using C++. It demonstrates how advanced programming concepts like **inheritance**, **encapsulation**, and **polymorphism** can be applied to create real-world applications.

### **Why Did We Choose This Project?**
| Reason                  | Description                                                                 |
|-------------------------|-----------------------------------------------------------------------------|
| **Educational Value**   | It’s a practical way to learn and demonstrate OOP concepts.                |
| **Relatable and Fun**   | Card games are universally understood, making the project engaging.        |
| **Open Source Contribution** | It provides opportunities for collaboration and improvement.           |

### **Key Features**
| Game       | Features                                                                                 |
|------------|------------------------------------------------------------------------------------------|
| **Blackjack** | - Player vs. Dealer Gameplay<br>- Betting System<br>- Leaderboard<br>- Save and Load Functionality |
| **Teen Patti** | - Multiplayer Gameplay<br>- Card Shuffling and Dealing<br>- Winner Determination |

---

## **2. Objectives**

### **What Do We Aim to Achieve?**
| Objective | Description                                                                 |
|-----------|-----------------------------------------------------------------------------|
| **Understand** | The implementation of card games using object-oriented programming.   |
| **Analyze**    | The design choices, data structures, and algorithms used.             |
| **Identify**   | Areas for improvement or optimization in the codebase.                |
| **Contribute** | Raise issues, suggest enhancements, or submit pull requests.          |

---

## **3. Breadth-Wise Understanding of the Project**

### **Codebase Structure**
| Module       | Description                                                                 |
|--------------|-----------------------------------------------------------------------------|
| **Blackjack** | Found in the `src` folder. Includes classes like `Game`, `Player`, `Dealer`, `Deck`, and `Card`. Implements game mechanics, player statistics, and file handling. |
| **Teen Patti** | Found in the `TeenPatti` folder. Includes classes like `Game`, `Player`, and `Deck`. Focuses on multiplayer gameplay and winner determination. |

### **Key Components**
| Component    | Description                                                                 |
|--------------|-----------------------------------------------------------------------------|
| **Card Class** | Represents a playing card with attributes like rank, suit, and value.    |
| **Deck Class** | Manages a collection of cards, including shuffling and dealing.          |
| **Player Class** | Tracks player details such as name, hand, cash, and statistics.        |
| **Game Class** | Implements the main game logic, including rounds, betting, and winner determination. |

---

## **4. Depth-Wise Analysis**

### **4.1 Approaches Taken**
| Approach               | Description                                                                 |
|------------------------|-----------------------------------------------------------------------------|
| **Object-Oriented Design** | Encapsulation of game logic and player data into modular classes. Inheritance for shared functionality (e.g., `Player` and `Dealer` inherit from `Human`). |
| **File Handling**      | Binary files are used to save and load game states. High scores are stored in a separate file for leaderboard functionality. |
| **Randomization**      | Card shuffling is implemented using `std::random_shuffle` to ensure fairness. |

### **4.2 Data Structures Used**
| Data Structure | Usage                                                                 |
|----------------|----------------------------------------------------------------------|
| **Vectors**    | Used to store cards in the deck and player hands.                   |
| **Strings**    | Used for player names and card ranks.                               |
| **Custom Classes** | `Card`, `Deck`, `Player`, and `Game` encapsulate specific functionalities. |

### **4.3 Tradeoffs Made**
| Tradeoff       | Description                                                                 |
|----------------|-----------------------------------------------------------------------------|
| **Randomization** | `std::random_shuffle` is used, which is deprecated in modern C++ standards. A better alternative would be `std::shuffle` with a random number generator. |
| **File Handling** | Binary files are simple but lack portability compared to formats like JSON or XML. |
| **Game Logic**    | The game logic is tightly coupled with the `Game` class, making it harder to extend or reuse components independently. |

---

## **5. Findings and Suggestions**

### **Strengths**
| Strength           | Description                                                                 |
|--------------------|-----------------------------------------------------------------------------|
| **Modular Design** | Clear separation of responsibilities across classes.                       |
| **Comprehensive Features** | Implements all essential game mechanics.                          |
| **Educational Value** | Demonstrates advanced programming concepts effectively.                |

### **Areas for Improvement**
| Improvement        | Description                                                                 |
|--------------------|-----------------------------------------------------------------------------|
| **Modernization**  | Replace `std::random_shuffle` with `std::shuffle` for better compatibility with modern C++ standards. |
| **Error Handling** | Add robust error handling for file operations and invalid inputs.           |
| **Code Reusability** | Decouple game logic from the `Game` class to improve reusability and testability. |
| **Documentation**  | Add detailed comments and documentation for better code readability and maintainability. |

---

## **6. Contribution**

### **How Can You Contribute?**
| Contribution Type  | Description                                                                 |
|--------------------|-----------------------------------------------------------------------------|
| **Raise an Issue** | Highlight the use of deprecated `std::random_shuffle` and suggest replacing it with `std::shuffle`. |
| **Suggest Enhancements** | Propose improvements in file handling and error handling.            |
| **Create a Pull Request** | Refactor the `Game` class for better modularity and reusability.     |

---

## **7. Presentation**

This document serves as the markdown presentation for the project. It includes an overview, objectives, analysis, and findings, making it a comprehensive resource for understanding and discussing the project.

---

## **8. Q&A Preparation**

### **Sample Questions**
| Category       | Questions                                                                 |
|----------------|---------------------------------------------------------------------------|
| **Breadth-Wise** | - What are the main components of the project, and how do they interact?<br>- How is the deck of cards managed in the game? |
| **Depth-Wise**   | - What data structures are used to store player hands and the deck?<br>- How does the project handle randomization for card shuffling? |
| **Tradeoffs**    | - Why was binary file handling chosen over text-based formats?<br>- What are the limitations of the current implementation? |

---

## **9. Conclusion**

To wrap up, this project is an excellent example of how object-oriented programming can be used to implement real-world applications. By analyzing and contributing to this project, we gain valuable insights into software design, problem-solving, and collaboration in open source development.

---

### **Thank You!**

Thank you for your time and attention! This project is a testament to the power of collaboration and innovation in open source development. Let’s continue to build, learn, and grow together!