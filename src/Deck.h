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
    int nextCardIndex;
public:
    Deck(int size, std::vector<Card> cards);

    void Shuffle(std::vector<Card>& deck);
    Card DrawCard();
    bool isEmpty();

    void GenerateCards();
    std::vector<Card> GenerateDeck(std::vector<Card>& cardVector);
};