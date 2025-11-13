#include "Tile.h"

Tile::Tile(int xCoordinate, int yCoordinate, int width, int height, TileType tileType)
{
	mXCoordinate = xCoordinate;
	mYCoordinate = yCoordinate;
	mWidth = width;
	mHeight = height;
	mTileType = tileType;
}

int Tile::GetXCoordinate()
{
	return mXCoordinate;
}

int Tile::GetYCoordinate()
{
	return mYCoordinate;
}

int Tile::GetHeight()
{
	return mHeight;
}

void Tile::SetXCoordinate(int x)
{
	mXCoordinate = x;
}

void Tile::SetYCoordinate(int y)
{
	mXCoordinate = y;
}

void Tile::SetWidth(int width)
{
	mWidth = width;
}

void Tile::SetHeight(int height)
{
	mHeight = height;
}