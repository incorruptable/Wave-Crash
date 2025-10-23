#include "Token.h"

Token::Token(Tile* tile, int xCoordinate, int yCoordinate)
{
    m_tile = tile;
    m_xCoordinate = xCoordinate;
    m_yCoordinate = yCoordinate;
}

void Token::SetTile(Tile* newTile, int xCoordinate, int yCoordinate)
{
    m_tile = newTile;
    m_xCoordinate = xCoordinate;
    m_yCoordinate = yCoordinate;
}

int Token::GetXCoordinate()
{
    return m_xCoordinate;
}

int Token::GetYCoordinate()
{
    return m_yCoordinate;
}

Tile* Token::GetTile()
{
    return m_tile;
}