# Teen Patti Game

## Overview
Teen Patti is a popular card game originating from India, similar to poker. This project implements the Teen Patti game in C++, allowing two players to compete against each other using a standard deck of cards.

## Project Structure
```
TeenPattiGame
├── src
│   ├── main.cpp          # Entry point of the application
│   ├── game.cpp          # Implementation of the Game class
│   ├── game.h            # Declaration of the Game class
│   ├── cards.cpp         # Implementation of the Cards class
│   ├── cards.h           # Declaration of the Cards class
│   └── utils.cpp         # Utility functions for the game
├── include
│   ├── game.h            # Header for the Game class (duplicate)
│   └── cards.h           # Header for the Cards class (duplicate)
├── assets
│   └── A1deck.txt        # Card deck used in the game
├── tests
│   └── game_test.cpp     # Unit tests for the Game class
├── CMakeLists.txt        # Build configuration file
└── README.md             # Project documentation
```

## Building the Project
To build the Teen Patti game, follow these steps:

1. Ensure you have CMake installed on your system.
2. Open a terminal and navigate to the project directory.
3. Create a build directory:
   ```
   mkdir build
   cd build
   ```
4. Run CMake to configure the project:
   ```
   cmake ..
   ```
5. Build the project:
   ```
   make
   ```

## Running the Game
After building the project, you can run the game by executing the generated binary in the build directory.

## Testing
Unit tests for the game logic are provided in the `tests/game_test.cpp` file. To run the tests, ensure you have a testing framework set up and execute the tests from the build directory.

## Contributing
Contributions to improve the game or add new features are welcome. Please fork the repository and submit a pull request with your changes.

## License
This project is licensed under the MIT License. See the LICENSE file for more details.