#pragma once

#include <string>
#include <iostream>
#include "../src/graphics/Graphics.h"

class Card
{
private:
    int xCoordinate;
    int yCoordinate;
    int width;
    int height;
    std::string text;
    int magnitude;

    enum class CardType
    {
        PUSH_WAVE,
        PULL_WAVE,
        MOVE_TOKEN
    };

public:
    Card(int xCoordinate, int yCoordinate, int width, int height, int magnitude, Card::CardType type);
    ~Card();

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
    void SetText(std::string text);

    void draw(Graphics& object);
};