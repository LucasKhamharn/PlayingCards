//
//  main.cpp
//  Playing cards and decks
//
//  Created by Lucas on 3/3/24.
//

#include <iostream>
#include "Deck.hpp"
#include "Card.hpp"

int main()
{
    Deck deck;
    deck.Shuffle();
    deck.Print();
    std::cout << std::endl;
    
    Card* card = deck.TopCard();
    card->Print();
    std::cout << std::endl;
    
    deck.PopCard();
    deck.Print();
    std::cout << std::endl;
    
    return 0;
}
