//
//  Card.hpp
//
//  Created by Lucas on 3/3/24.
//

#ifndef Card_hpp
#define Card_hpp

#include <iostream>

class Card
{
public:
    enum Suits
    {
        HEARTS = 3,
        DIAMONDS,
        CLUBS,
        SPADES
    };
    
    enum Ranks
    {
        TWO = 2,
        THREE,
        FOUR,
        FIVE,
        SIX,
        SEVEN,
        EIGHT,
        NINE,
        TEN,
        JACK,
        QUEEN,
        KING,
        ACE
    };
    
    Card(Ranks RANK, Suits SUIT);
    virtual ~Card();
    
    Ranks GetRank();
    Suits GetSuit();
    virtual int GetFaceValue();
    void Print();
    
private:
    Ranks Rank;
    Suits Suit;
};

#endif /* Card_hpp */
