/**
 * @author:
 * @project:
 * @purpose:
 * @date:
 */

#include <iostream>

//------------------------------------------------------------------------------
//Files we are testing:
#include "includes/point/point.h"



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
    Point p1(5,4);
    Point p2(1,1);
    p1.Print();
    cout << endl;
    p2.Print();
    cout << endl;
    double d = p1.Distance(p2);
    cout << "Distance between ";
    p1.Print();
    cout << " and ";
    p2.Print();
    cout << " is: " << d << endl;
}

void testB(bool debug)
{
    // TODO: add more test here
}

/*


---------running basic_test---------

(5, 4)
(1, 1)
Distance between (5, 4) and (1, 1) is: 5


------------- D O N E --------------



-----------running testB------------



------------- D O N E --------------

*/