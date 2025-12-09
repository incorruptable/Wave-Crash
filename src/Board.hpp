#pragma once

#include <vector>

#include "Token.h"
#include "Tile.h"
#include "Card.h"

class Board
{
private:
	const int MAX_BOARD_SIZE = 11;
	const int TOKENS_PER_SIDE = 3;
	const int TURNS = 12;
	const int TILE_WIDTH = 16;
	const int TILE_HEIGHT = 64;
	const int X_PADDING = 16;

	std::vector<Tile> mTiles;
	std::vector<Token> mRedTokens;
	std::vector<Token> mBlueTokens;

public:
	
	/*
	Function: BuildBoard
	Purpose: Builds the Board, placing a red and blue wave at the ends.
	Input:
	Returns: Nothing
	*/
	void BuildBoard()
	{
		mTiles.clear();
		mTiles.reserve(MAX_BOARD_SIZE);
		
		// Create a generic tile from the coordinate constructor setup. 
		Tile tile(X_PADDING, 0, TILE_WIDTH, TILE_HEIGHT);

		tile.SetType(Tile::TileType::RED_WAVE);
		mTiles.emplace_back(tile); // Place the first wave

		tile.SetType(Tile::TileType::MOVEMENT_TILE);
		for (int i = 1; i < MAX_BOARD_SIZE - 1; i++)
		{
			tile.SetXCoordinate(X_PADDING + (i * TILE_WIDTH));
			mTiles.emplace_back(tile);
		}

		tile.SetType(Tile::TileType::BLUE_WAVE);
		tile.SetXCoordinate(X_PADDING + ((MAX_BOARD_SIZE - 1) * TILE_WIDTH));
		mTiles.emplace_back(tile);
	}

	/*
	Function: RepositionTiles
	Purpose: A second form of building the board.
	Input: The current tiles by reference.
	Returns: Nothing
	Result: Rebuilds the board based on the number of tiles in the vector.
	*/
	void RepositionTiles()
	{
		int i = 0;
		for (Tile& tile : mTiles)
		{
			tile.SetXCoordinate(X_PADDING + (i*TILE_WIDTH));
			i++;
		}
	}

	/*
	Function: ApplyCard
	Purpose: Sends the card to the correct function to apply the logic.
	Input: Pass the card by reference and determine what logic applies
	Returns: Nothing
	*/
	void ApplyCard(const Card& card)
	{
		if (card.GetType() == Card::CardType::MOVE_TOKEN)
		{
			MovePlayer(card);
		}
		else
		{
			MoveWave(card);
		}
	}


	/*
	Function: MoveWave
	Purpose: Moves either the red or blue wave according to the card received
	Input: Receives the card by reference.
	Result: Drowns any tokens standing on removed tiles.
	*/
	void MoveWave(const Card& card)
	{
		if (card.GetType() == Card::CardType::PULL_WAVE)
		{
			int movementTiles = static_cast<int>(mTiles.size()) - 2;
			if (movementTiles <= 0 || movementTiles < card.GetMagnitude())
			{
				return; // Returns if there are no more movement tiles (shouldn't work anyway, because the game would end)
				//or if the magnitude is greater than the number of tiles (IE: 1 tile left and trying to remove two
			}
			if (card.GetSide() == Card::TargetSide::RED)
			{
				int removeIndex = 1;

				// TODO: Drown tokens on the indexes being removed.

				for (int i = 0; i < card.GetMagnitude(); i++)
				{
					mTiles.erase(mTiles.begin() + removeIndex);
				}
			}
			else if (card.GetSide() == Card::TargetSide::BLUE)
			{
				// TODO: Drown tokens on the indexes being removed.

				for (int i = 0; i < card.GetMagnitude(); i++)
				{
					int removeIndex = static_cast<int>(mTiles.size()) - 2;
					mTiles.erase(mTiles.begin() + removeIndex);
				}
			}
		}
		else if (card.GetType() == Card::CardType::PUSH_WAVE)
		{
			int freeSlots = MAX_BOARD_SIZE - static_cast<int>(mTiles.size());
			if (freeSlots<=0 || freeSlots < card.GetMagnitude())
			{
				return; // Not enough room.
			}
			if (card.GetSide() == Card::TargetSide::RED)
			{
				for (int i = 0; i < card.GetMagnitude(); i++)
				{
					Tile newTile(X_PADDING, 0, TILE_WIDTH, TILE_HEIGHT, Tile::TileType::MOVEMENT_TILE);

					mTiles.insert(mTiles.begin()+1, newTile);
				}
			}
			else if (card.GetSide() == Card::TargetSide::BLUE)
			{
				for (int i = 0; i < card.GetMagnitude(); i++)
				{
					Tile newTile(X_PADDING, 0, TILE_WIDTH, TILE_HEIGHT, Tile::TileType::MOVEMENT_TILE);

					mTiles.insert(mTiles.end() - 1, newTile);
				}
			}
		}
		RepositionTiles();
	}

	void MovePlayer(const Card& card)
	{

	}
};