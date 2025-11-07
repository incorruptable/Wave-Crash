#include "Tile.h"

Tile::Tile(int xCoordinate, int yCoordinate, int width, int heigh, TileType tileType)
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