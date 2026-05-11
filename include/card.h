

/* This struct represents the 52 cards in a standard deck
    without jokers. */

struct Card {

    // used enum to reduce errors suit declarations
    enum Suit { club, diamond, heart, spade };

    // used enum to make card value comparison simple and make a value member not needed
    enum class Rank { ace = 1, two = 2, three = 3, four = 4, five = 5,
                six = 6, seven = 7, eight = 8, nine = 9, ten = 10, 
                jack = 11, queen = 12, king = 13 };

    Suit suit;
    Rank rank;

    Card(Suit suit, Rank rank): suit(suit), rank(rank) {}


};