#pragma once

#include "Tile.h"

#include <iostream>
#include <vector>

class Token
{
private:
    int m_xCoordinate;
    int m_yCoordinate;
    Tile* m_tile;

public:
    Token(Tile* currentTile, int xCoordinate, int yCoordinate);


    Tile* GetTile();
    int GetXCoordinate();
    int GetYCoordinate();

    void SetTile(Tile* newTile, int xCoordinate, int yCoordinate);
};