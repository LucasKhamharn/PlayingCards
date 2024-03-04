//
//  Card.cpp
//
//  Created by Lucas on 3/3/24.
//

#include "Card.hpp"

Card::Card(Ranks RANK, Suits SUIT)
    : Rank(RANK),
      Suit(SUIT)
{
    //Leave blank
}

Card::~Card() 
{
    // leave blank
}

Card::Ranks Card::GetRank()
{
    return Rank;
}

Card::Suits Card::GetSuit()
{
    return Suit;
}

int Card::GetFaceValue() 
{
    if(Rank <= TEN)
    {
        return static_cast<int>(Rank);
    }
    if(Rank <= KING)
    {
        return 10;
    }
    return 11;
}

void Card::Print()
{
    if (Rank <= TEN)
        std::cout << "T";
    else if (Rank == JACK)
        std::cout << "J";
    else if (Rank ==  QUEEN)
        std::cout << "Q";
    else if (Rank == KING)
        std::cout << "K";
    else
        std::cout << "A";
    
    if (Suit == HEARTS)
        std::cout << "H";
    else if (Suit == DIAMONDS)
        std::cout << "D";
    else if (Suit == CLUBS)
        std::cout << "C";
    else if (Suit == SPADES)
        std::cout << "S";
}
