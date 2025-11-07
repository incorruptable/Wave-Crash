#pragma once

#include <string>
#include <iostream>
#include "../src/graphics/Graphics.h"

class Tile
{
private:

    enum class TileType
    {
        MOVEMENT_TILE,
        WAVE
    };

    int mXCoordinate;
    int mYCoordinate;
    int mWidth;
    int mHeight;
    TileType mTileType;

public:
    Tile(int xCoordinate, int yCoordinate, int width, int height, TileType tileType);

    //Getters
    int GetXCoordinate();
    int GetYCoordinate();
    int GetWidth();
    int GetHeight();

    //Setters
    void SetXCoordinate(int x);
    void SetYCoordinate(int y);
    void SetWidth(int width);
    void SetHeight(int height);

    void draw(Graphics& object);
};