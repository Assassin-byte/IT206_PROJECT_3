#include "game.h"
#include <gtest/gtest.h>

TEST(GameTest, TestGameInitialization) {
    Game game;
    EXPECT_NO_THROW(game.startGame());
}

TEST(GameTest, TestPlayRound) {
    Game game;
    game.startGame();
    EXPECT_NO_THROW(game.playRound());
}

TEST(GameTest, TestDetermineWinner) {
    Game game;
    game.startGame();
    game.playRound();
    EXPECT_NO_THROW(game.determineWinner());
}

TEST(GameTest, TestMultipleRounds) {
    Game game;
    game.startGame();
    for (int i = 0; i < 3; ++i) {
        EXPECT_NO_THROW(game.playRound());
    }
    EXPECT_NO_THROW(game.determineWinner());
}