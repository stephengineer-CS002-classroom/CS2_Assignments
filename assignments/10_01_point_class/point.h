#ifndef POINT_H
#define POINT_H

#include <iostream>
#include <cmath>

using namespace std;

class Point
{
public:
    // CTOR
    Point();
    Point(int x, int y);

    // Member functions
    void Print();
    double Distance(Point other);

    // Accessors
    int GetX();
    int GetY();

    // Modifiers
    void SetX(int x);
    void SetY(int y);

private:
    // member variables
    int _x;
    int _y;
};

#endif // POINT_H