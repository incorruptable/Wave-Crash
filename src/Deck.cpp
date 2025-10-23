#include "Deck.h"

Deck::Deck(int size, std::vector<Card> inCards)
{

}

void Deck::Shuffle(std::vector<Card>& inDeck)
{
    std::random_device rd;
    std::mt19937 rng(rd());
    std::shuffle(inDeck.begin(), inDeck.end(), rng);
    nextCardIndex = 0;
}

void Deck::GenerateCards()
{
    Card card;

    //Red Waves Push/Pull
    card.SetEffect(1, 1, "Pull the Red Waves in by (1) One Tile", 1);
    cards.emplace_back(card);

    card.SetEffect(1, 1, "Pull the Red Waves in by (2) Two Tiles", 2);
    cards.emplace_back(card);

    card.SetEffect(0, 1, "Push the Red Waves out by (2) Two Tiles", 2);
    cards.emplace_back(card);

    card.SetEffect(0, 1, "Push the Red Waves out by (1) One Tile", 1);
    cards.emplace_back(card);

    //Blue Waves Push/Pull
    card.SetEffect(1, 2, "Pull the Blue Waves in by (1) One Tile", 1);
    cards.emplace_back(card);

    card.SetEffect(1, 2, "Pull the Blue Waves in by (2) Two Tiles", 2);
    cards.emplace_back(card);

    card.SetEffect(0, 2, "Push the Blue Waves out by (2) Two Tiles", 2);
    cards.emplace_back(card);

    card.SetEffect(0, 2, "Push the Blue Waves out by (1) One Tile", 1);
    cards.emplace_back(card);

    //Token Moves
    card.SetEffect(2, 2, "Move (1) Pawn towards the Blue Waves by (1) One Tile", 1);
    cards.emplace_back(card);

    card.SetEffect(2, 2, "Move (1) Pawn towards the Blue Waves by (2) Two Tiles", 2);
    cards.emplace_back(card);

    card.SetEffect(2, 1, "Move (1) Pawn towards the Red Waves by (1) One Tile", 1);
    cards.emplace_back(card);

    card.SetEffect(2, 1, "Move (1) Pawn towards the Red Waves by (2) Two Tiles", 2);
    cards.emplace_back(card);
}

std::vector<Card> Deck::GenerateDeck(std::vector<Card>& cardVector)
{
    std::vector<Card> tempVector;
    for(int copy = 0; copy < 5; copy++)
    {
        for (const auto& baseCard : cardVector)
        {
            tempVector.push_back(baseCard);
        }
    }

    return tempVector;
}