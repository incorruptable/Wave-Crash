#pragma once

#include <string>
#include <iostream>
#include "../src/graphics/Graphics.h"

class Tile
{
public:
    enum class TileType
    {
        MOVEMENT_TILE,
        RED_WAVE,
        BLUE_WAVE
    };
private:

    int mXCoordinate;
    int mYCoordinate;
    int mWidth;
    int mHeight;
    TileType mTileType;

public:
    //Constructors

    /*
    Purpose: Takes in JUST the tileType to adjust as needed.
    */
    Tile(TileType tileType);
    /*
    Purpose: Adjusts the size where 
    */
    Tile(int xCoordinate, int yCoordinate, int width, int height);
    Tile(int xCoordinate, int yCoordinate, int width, int height, TileType tileType);

    //Getters
    int GetXCoordinate() const;
    int GetYCoordinate() const;
    int GetWidth() const;
    int GetHeight() const;
    TileType GetType() const;

    //Setters
    void SetXCoordinate(int x);
    void SetYCoordinate(int y);
    void SetWidth(int width);
    void SetHeight(int height);
    void SetType(TileType tileType);

    void draw(Graphics& object);
};