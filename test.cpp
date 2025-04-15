#include <iostream>
using namespace std;

int main() {
    // Define the four suits of cards using ASCII values
    char suits[] = {3, 4, 5, 6}; // ♥ = 3, ♦ = 4, ♣ = 5, ♠ = 6 (ASCII values for card suits)

    // Print the suits
    cout << "The four suits of cards are:" << endl;
    for (int i = 0; i < 4; i++) {
        cout << suits[i] << " "; // Print each suit
    }
    cout << endl;

    return 0;
}
