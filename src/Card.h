#pragma once

#include <string>
#include <iostream>
#include "../src/graphics/Graphics.h"

class Card
{
public:
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
private:
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
    CardType GetType() const;
    int GetMagnitude() const;
    TargetSide GetSide() const;

    //Getters
    int GetXCoordinate() const;
    int GetYCoordinate() const;
    int GetWidth() const;
    int GetHeight() const;

    //Setters
    void SetXCoordinate(int x);
    void SetYCoordinate(int y);
    void SetWidth(int width);
    void SetHeight(int height);
    void SetEffect(int typeValue, int directionValue, std::string text, int magnitude = 1);

    friend bool operator==(const Card& left, const Card& right);

    void draw(Graphics& object);
};