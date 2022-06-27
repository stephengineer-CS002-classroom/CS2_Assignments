/**
 * @author:
 * @project:
 * @purpose:
 * @date:
 */

#include <iostream>

#include <iostream>

//------------------------------------------------------------------------------
//Files we are testing:
#include "includes/point/point.h"
#include "includes/line/line.h"


//------------------------------------------------------------------------------

using namespace std;

void basic_test(bool debug=false);
void testB(bool debug=false);

int main()
{
    // BASIC TEST
    cout << "\n\n---------running basic_test---------\n\n";
    basic_test();
    cout << "\n\n------------- D O N E --------------\n\n";

    // TEST B
    cout << "\n\n-----------running testB------------\n\n";
    testB();
    cout << "\n\n------------- D O N E --------------\n\n";

    return 0;
}


void basic_test(bool debug)
{
    // init three points
    Point p1(5,4);
    Point p2(1,3);
    Point p3;
    p3.SetX(3);
    p3.SetY(3);

    // print out three points
    cout << "p1: ";
    p1.Print();
    cout << endl;
    cout << "p2: ";
    p2.Print();
    cout << endl;
    cout << "p3: ";
    p3.Print();
    cout << endl << endl;
    
    //initialize line_1, line_2
    Line line_1(p1, p2);
    Line line_2(1, 2, 5, 7);

    //test slope, length, middle point
    cout << "line 1: ";
    line_1.Print();
    cout << "Slope of line 1: " << line_1.Slope() << endl;
    cout << "Length of line 1: " << line_1.Length() << endl;
    cout << "Midpoint of line 1: ";
    line_1.MidPoint().Print();
    cout << endl << endl;

    cout << "line 2: ";
    line_2.Print();
    cout << "Slope of line 2: " << line_2.Slope() << endl;
    cout << "Length of line 2: " << line_2.Length() << endl;
    cout << "Midpoint of line 2: ";
    line_2.MidPoint().Print();
    cout << endl << endl;

    //test setA setB
    line_2.SetA(2, 9);
    line_2.SetB(4, 7);
    cout << "Adjusted starting point for line 2: ";
    line_2.GetA().Print();
    cout << endl;
    cout << "Adjusted ending point for line 2: ";
    line_2.GetB().Print();
    cout << endl;
}

void testB(bool debug)
{
    // TODO: add more test here
}

/*


---------running basic_test---------

p1: (5, 4)
p2: (1, 3)
p3: (3, 3)

line 1: (5, 4) ---> (1, 3)
Slope of line 1: 0.25
Length of line 1: 4.12311
Midpoint of line 1: (3, 3)

line 2: (1, 2) ---> (5, 7)
Slope of line 2: 1.25
Length of line 2: 6.40312
Midpoint of line 2: (3, 4)

Adjusted starting point for line 2: (2, 9)
Adjusted ending point for line 2: (4, 7)


------------- D O N E --------------



-----------running testB------------



------------- D O N E --------------

*/