#ifndef LINE_H
#define LINE_H

#include <iostream>

#include "point.h"

using namespace std;

class Line
{
public:
    // CTOR
    Line();
    Line(Point p1, Point p2);
    Line(double x1, double y1, double x2, double y2);
    
    // Member functions
    void Print();
    double Length();
    double Slope();
    Point MidPoint();

    // Accessors
    Point GetA();
    Point GetB();

    // Modifiers
    void SetA(double x1, double y1);
    void SetB(double x2, double y2);
    
private:
    // member variables
    Point _a;
    Point _b;
};

#endif // LINE_H