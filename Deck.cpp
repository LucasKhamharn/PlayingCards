//
//  Deck.cpp
//
//  Created by Lucas on 3/4/24.
//

#include "Deck.hpp"
#include <iostream>
#include <random>

Deck::Deck() 
    : deck()
{
    for (Card::Ranks r = Card::TWO; r <= Card::ACE; r = static_cast<Card::Ranks>(static_cast<int>(r) + 1))
    {
        for (Card::Suits s = Card::HEARTS; s <= Card::SPADES; s = static_cast<Card::Suits>(static_cast<int>(s) + 1))
        {
            deck.push_front(new Card(r, s));
        }
    }
}

Deck::~Deck() 
{
    for (Card* card : deck)
    {
        delete card;
    }
    deck.clear();
}

void Deck::Print()
{
        for (Card * card : deck)
        {
            card->Print();
            std::cout << " ";
        }
}

void Deck::Shuffle()
{
    std::random_device rd;
    std::default_random_engine rng(rd());
    std::shuffle(deck.begin(), deck.end(), rng);
}


Card *Deck::TopCard()
{
    return deck.front();
}

void Deck::PopCard() 
{
    deck.push_back(deck.front());
    deck.erase(deck.begin());
}


