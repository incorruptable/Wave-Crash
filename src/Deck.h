#pragma once

#include "Card.h"
#include "Player.h"

#include <vector>
#include <random>
#include <algorithm>

class Deck
{
private:
    std::vector<Card> cards;
    std::vector<Card> deck;
    int nextCardIndex;
public:
    Deck(int size, std::vector<Card> cards);

    void Shuffle(std::vector<Card>& deck);
    Card DrawCard();
    bool isEmpty();

    void GenerateCards(); //Gets called exactly once at the start of the game.
    std::vector<Card> GenerateDeck();
};