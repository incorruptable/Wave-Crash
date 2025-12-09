#include "Tile.h"

Tile::Tile(TileType tileType)
{
	mYCoordinate = 0;
	mXCoordinate = 0;
	mWidth = 0;
	mHeight = 0;
	mTileType = tileType;
}

Tile::Tile(int xCoordinate, int yCoordinate, int width, int height)
{
	mXCoordinate = xCoordinate;
	mYCoordinate = yCoordinate;
	mWidth = width;
	mHeight = height;
	mTileType = TileType::MOVEMENT_TILE;
}

Tile::Tile(int xCoordinate, int yCoordinate, int width, int height, TileType tileType)
{
	mXCoordinate = xCoordinate;
	mYCoordinate = yCoordinate;
	mWidth = width;
	mHeight = height;
	mTileType = tileType;
}

int Tile::GetXCoordinate() const
{
	return mXCoordinate;
}

int Tile::GetYCoordinate() const
{
	return mYCoordinate;
}

int Tile::GetHeight() const
{
	return mHeight;
}

int Tile::GetWidth() const
{
	return mWidth;
}

Tile::TileType Tile::GetType() const
{
	return mTileType;
}

void Tile::SetXCoordinate(int x)
{
	mXCoordinate = x;
}

void Tile::SetYCoordinate(int y)
{
	mYCoordinate = y;
}

void Tile::SetWidth(int width)
{
	mWidth = width;
}

void Tile::SetHeight(int height)
{
	mHeight = height;
}

void Tile::SetType(Tile::TileType tileType)
{
	mTileType = tileType;
}