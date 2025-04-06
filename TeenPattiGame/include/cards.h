class Cards {
public:
    int rank; // Rank of the card
    std::string suit; // Suit of the card

    // Constructor to initialize a card
    Cards(int r, const std::string& s) : rank(r), suit(s) {}

    // Method to get the rank of the card
    int getRank() const {
        return rank;
    }

    // Method to get the suit of the card
    std::string getSuit() const {
        return suit;
    }

    // Method to compare two cards
    bool operator>(const Cards& other) const {
        return rank > other.rank;
    }
};