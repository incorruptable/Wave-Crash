#include <iostream>
#include "Graphics.h"

Graphics::Graphics(double inWidth, double inHeight)
{
    width = inWidth;
    height = inHeight;
    terminateOnClose = true;
    currentColor = "#000000";
}

void Graphics::setTerminateOnClose(bool terminate)
{
    terminateOnClose = terminate;
}

void Graphics::clear()
{

}

void Graphics::setColor(const std::string& color)
{
    currentColor = color;
}

std::string Graphics::getColor() const
{
    return currentColor;
}

void Graphics::fillRect(int x, int y, int w, int h)
{

}

void Graphics::fillTriangle(int side)
{

}

