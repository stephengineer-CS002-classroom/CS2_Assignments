# 10_01_point_class

- Accept [10_01_point_class](https://classroom.github.com/a/cq22aok8)
- Get [main.cpp](main.cpp)
- Get [point.h](point.h)


## Description

Create a Point class, we can create points and calculate the distance between two points.

```c++
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
``