//
//  Deck.hpp
//
//  Created by Lucas on 3/4/24.
//

#ifndef Deck_hpp
#define Deck_hpp

#include <deque>
#include "Card.hpp"

class Deck
{
public:
    Deck();
    ~Deck();
    
    void Print();
    void Shuffle();
    
    Card * TopCard();
    void PopCard();
    
    
private:
    std::deque<Card*> deck;
};




#endif /* Deck_hpp */
