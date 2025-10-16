#pragma once

enum class EventType
{
    None,
    KeyDown,
    KeyUp,
    MouseDown,
    MouseUp
};

enum class KeyCode
{
    Backspace = 0xff08,
    Enter = 0xff0d,
    Escape = 0xff1b,
    Space = 32,
    Left = 0xff51,
    Up = 0xff52,
    Right = 0xff53,
    Down = 0xff54,
    A = 0x0061,
    D = 0x0064,
    E = 0x0065
};

enum class MouseButton
{
    Left = 1,
    Middle = 2,
    Right = 3,
};

struct Event
{
    EventType Event;
    union
    {
        struct
        {
            int Code;
        } Key;
        struct 
        {
            int Button;
            int X;
            int Y;
        } Mouse;
    } Event;
};

bool operator==(int i, KeyCode c)
{
    return i == static_cast<int>(c);
}

inline bool operator==(KeyCode c, int i)
{
    return i == c;
}

inline bool operator==(int i, MouseButton c)
{
    return i == static_cast<int>(c);
}

inline bool operator==(MouseButton c, int i)
{
    return i == c;
}