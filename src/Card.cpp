#include "Card.h"

Card::Card()
{
    xCoordinate = 0;
    yCoordinate = 0;
    width = 30;
    height = 90;
    magnitude = 1;
    type = static_cast<CardType>(0);
    text = "";
    targetSide = static_cast<TargetSide>(1);
}

Card::Card(int inXCoordinate, int inYCoordinate, int inWidth, int inHeight, int inMagnitude, Card::CardType inType, std::string inText, Card::TargetSide inTargetSide)
{
    xCoordinate = inXCoordinate;
    yCoordinate = inYCoordinate;
    width = inWidth;
    height = inHeight;
    magnitude = inMagnitude;
    type = inType;
    text = inText;
    targetSide = inTargetSide;
}

Card::CardType Card::GetType()
{
    return type;
}

int Card::GetMagnitude()
{
    return magnitude;
}

int Card::GetXCoordinate()
{
    return xCoordinate;
}

int Card::GetYCoordinate()
{
    return yCoordinate;
}

int Card::GetWidth()
{
    return width;
}

int Card::GetHeight()
{
    return height;
}

void Card::SetXCoordinate(int x)
{
    xCoordinate = x;
}

void Card::SetYCoordinate(int y)
{
    yCoordinate = y;
}

void Card::SetWidth(int inWidth)
{
    width = inWidth;
}

void Card::SetHeight(int inHeight)
{
    height = inHeight;
}

void Card::SetEffect(int typeValue, int directionValue, std::string inText, int inMagnitude = 1)
{
    type = static_cast<CardType>(typeValue);
    targetSide = static_cast<TargetSide>(directionValue);
    text = inText;
    magnitude = inMagnitude;
}

bool operator==(const Card& left, const Card& right)
{
    return left.magnitude == right.magnitude && left.type == right.type && left.targetSide == right.targetSide;
}

void Card::draw(Graphics& object)
{
    int x = xCoordinate - (width/2);
    int y = yCoordinate - height;

    object.drawRect(x, y, width, height);
}