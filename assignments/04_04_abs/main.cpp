/**
 * @author:
 * @project:
 * @purpose:
 * @date:
 */

#include <iostream>

//------------------------------------------------------------------------------
//Files we are testing:
#include "includes/abs/abs.h"



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
    //four random number
    int i=5;
    float f=-6.66;
    double d=9.99;
    long l=-123456789;

    //output
    cout<<"abs(int "<<i<<") ";
    cout<<Abs(i)<<endl;
    cout<<"abs(double "<<f<<") ";
    cout<<Abs(f)<<endl;
    cout<<"abs(float "<<d<<") ";
    cout<<Abs(d)<<endl;
    cout<<"abs(long "<<l<<") ";
    cout<<Abs(l)<<endl;
}

void testB(bool debug)
{
    // TODO: add more test here
}


/*


---------running basic_test---------

abs(int 5) 5
abs(double -6.66) 6.66
abs(float 9.99) 9.99
abs(long -123456789) 123456789


------------- D O N E --------------



-----------running testB------------



------------- D O N E --------------
*/