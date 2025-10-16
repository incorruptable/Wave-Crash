#pragma once
#include <string>

#include "Event.h"

class Graphics
{
private:
    double width;
    double height;
public:
    //Create window of dimensions
    Graphics(double width, double height);
    ~Graphics();

    //Terminates the window if the window closes.
    void setTerminateOnClose(bool terminate);

    //Clear window
    void clear();

    void setColor(const std::string& color);

    //#rrggbb return
    std::string getColor() const;

    void fillRect(int x, int y, int width, int height);
    void fillTriangle(int side);
    void fillCircle(int centerX, int centerY, int radius);

    void drawRect(int x, int y, int width, int height);
    void drawTriangle(int side);
    void drawCircle(int centerX, int centerY, int radius);

    void drawLine(int x0, int y0, int x1, int y1);
    void drawLabel(const std::string& text, int x, int y);

    int getWidth() const;
    int getHeight() const;

    bool hasEvents() const;
    
    Event getEvent();
};