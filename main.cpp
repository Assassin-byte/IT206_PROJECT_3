#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <vector>
#include <cstdlib>
#include <ctime>

int main() {
    // Initialize the game window
    sf::RenderWindow window(sf::VideoMode(800, 600), "Subway Surfer - Basic Version");
    window.setFramerateLimit(60);

    // Load textures
    sf::Texture playerTexture, obstacleTexture, backgroundTexture;
    playerTexture.loadFromFile("player.png"); // Replace with your player image
    obstacleTexture.loadFromFile("obstacle.png"); // Replace with your obstacle image
    backgroundTexture.loadFromFile("background.png"); // Replace with your background image

    // Create player sprite
    sf::Sprite player(playerTexture);
    player.setPosition(100, 500); // Initial position of the player

    // Create background sprite
    sf::Sprite background(backgroundTexture);
    background.setScale(1.5f, 1.5f); // Scale the background to fit the window

    // Create obstacles
    std::vector<sf::Sprite> obstacles;
    sf::Clock obstacleClock; // Timer for spawning obstacles

    // Game variables
    float playerSpeed = 5.0f;
    float gravity = 0.5f;
    float jumpSpeed = -10.0f;
    float verticalSpeed = 0.0f;
    bool isJumping = false;
    int score = 0;

    // Font and text for score
    sf::Font font;
    font.loadFromFile("arial.ttf"); // Replace with your font file
    sf::Text scoreText;
    scoreText.setFont(font);
    scoreText.setCharacterSize(24);
    scoreText.setFillColor(sf::Color::White);
    scoreText.setPosition(10, 10);

    // Game loop
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // Player controls
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space) && !isJumping) {
            isJumping = true;
            verticalSpeed = jumpSpeed;
        }

        // Apply gravity
        if (isJumping) {
            verticalSpeed += gravity;
            player.move(0, verticalSpeed);

            // Stop jumping when the player lands
            if (player.getPosition().y >= 500) {
                player.setPosition(player.getPosition().x, 500);
                isJumping = false;
            }
        }

        // Spawn obstacles
        if (obstacleClock.getElapsedTime().asSeconds() > 1.5f) {
            sf::Sprite obstacle(obstacleTexture);
            obstacle.setPosition(800, 500); // Spawn at the right edge
            obstacles.push_back(obstacle);
            obstacleClock.restart();
        }

        // Move obstacles
        for (auto& obstacle : obstacles) {
            obstacle.move(-playerSpeed, 0);
        }

        // Remove obstacles that go off-screen
        obstacles.erase(std::remove_if(obstacles.begin(), obstacles.end(),
                                       [](const sf::Sprite& obstacle) {
                                           return obstacle.getPosition().x < -50;
                                       }),
                        obstacles.end());

        // Check for collisions
        for (const auto& obstacle : obstacles) {
            if (player.getGlobalBounds().intersects(obstacle.getGlobalBounds())) {
                // End the game on collision
                window.close();
            }
        }

        // Update score
        score++;
        scoreText.setString("Score: " + std::to_string(score));

        // Render everything
        window.clear();
        window.draw(background);
        window.draw(player);
        for (const auto& obstacle : obstacles) {
            window.draw(obstacle);
        }
        window.draw(scoreText);
        window.display();
    }

    return 0;
}