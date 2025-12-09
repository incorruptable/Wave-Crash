#pragma once

#include <vector>

#include "wcgamedata.h"
#include "Player.h"

struct GTNode
{
	GameState mState;
};

// Function: GenStates
// Purpose: Generates the game tree starting at the inputted root
// Input: A GTNode pointer with the 1st state completed, a boolean to indicate who's turn it is (whether it's red or blue's turn), the current hand that the AI has.
// Returns: Nothing
// It'll generate only a single child in order to determine what the optimal move is.
void GenStates(GTNode* root, bool thisPlayer, std::vector<Card> hand);