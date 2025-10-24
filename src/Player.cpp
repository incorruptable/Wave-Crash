#include "player.h"

std::vector<Card> Player::AddCard(Deck& deck)
{
    Card newCard = deck.DrawCard();
    hand.push_back(newCard);
    return hand;
}

void Player::RemoveCard(Card& remCard)
{
    for(size_t i = 0; i < hand.size(); ++i)
    {
        if(hand[i] == remCard)
        {
            //Remove the card at index location. Break from loop.
            hand.erase(hand.begin() + i);
            break;
        }
    }
}

std::vector<Card>& Player::GetHand()
{
    return hand;
}