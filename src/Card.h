#pragma once

#include <string>
#include <iostream>
#include "../src/graphics/Graphics.h"

class Card
{
private:

    enum class CardType
    {
        PUSH_WAVE = 0,
        PULL_WAVE = 1,
        MOVE_TOKEN = 2
    };

    enum class TargetSide
    {
        RED = 1,
        BLUE = 2
    };

    int xCoordinate;
    int yCoordinate;
    int width;
    int height;
    std::string text;
    int magnitude;
    CardType type;
    TargetSide targetSide;



public:

    Card();
    Card(int xCoordinate, int yCoordinate, int width, int height, int magnitude, Card::CardType type, std::string text, Card::TargetSide targetSide);

    //Gameplay Accessors
    CardType GetType();
    int GetMagnitude();

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
    void SetEffect(int typeValue, int directionValue, std::string text, int magnitude = 1);

    void draw(Graphics& object);
};