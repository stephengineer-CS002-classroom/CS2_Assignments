/**
 * @author:
 * @project:
 * @purpose:
 * @date:
 */

#include <iostream>

//------------------------------------------------------------------------------
//Files we are testing:
#include "includes/max/max.h"



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
    int one = 5;
    int two = 7;
    int three = 9;
    int m;
    
    m = Max(one, two);
    cout << "Max(" << one << ", " << two << ") is " << m << endl;

    m = Max(three, two);
    cout << "Max(" << three << ", " << two << ") is " << m << endl;

    m = Max(one, two, three);
    cout << "Max(" << one << ", " << two << ", " << three << ") is " << m << endl;
    
    m = Max(two, one, three);
    cout << "Max(" << two << ", " << one << ", " << three << ") is " << m << endl;
    
    m = Max(three, one, two);
    cout << "Max(" << three << ", " << one << ", " << two << ") is " << m << endl;
}

void testB(bool debug)
{
    // TODO: add more test here
}


/*


---------running basic_test---------

Max(5, 7) is 7
Max(9, 7) is 9
Max(5, 7, 9) is 9
Max(7, 5, 9) is 9
Max(9, 5, 7) is 9


------------- D O N E --------------



-----------running testB------------



------------- D O N E --------------
*/