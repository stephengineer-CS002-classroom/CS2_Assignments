# 10_02_line_class

- Accept [10_02_line_class](https://classroom.github.com/a/F8di3jqr)
- Get [main.cpp](main.cpp)
- Get [line.h](line.h)


## Function

Create a Line class, we can create a line based on two points and calculate the length, slope and middle point of a line.

```c++
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
    void SetA(double x, double y);
    void SetB(double x,double y);
    
private:
    // member variables
    Point _a;
    Point _b;
};
```
