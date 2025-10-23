#pragma once

#include "Deck.h"
#include "Token.h"

class Player
{
private:
    std::vector<Card> hand;
    std::vector<Token> pawns;

public:


    std::vector<Card> AddCard(Deck& deck);
    void RemoveCard(Card& remCard);
    std::vector<Card>& GetHand();

};