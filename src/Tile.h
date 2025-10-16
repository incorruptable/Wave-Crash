#pragma once

#include <string>
#include <iostream>
#include "../src/graphics/Graphics.h"

class Tile
{
private:
    int xCoordinate;
    int yCoordinate;
    int width;
    int height;

    enum class TileType
    {
        MOVEMENT_TILE,
        WAVE
    };

public:
    Tile(int xCoordinate, int yCoordinate, int width, int height);
    ~Tile();

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