/**
 * @author:
 * @project:
 * @purpose:
 * @date:
 */

#include <iostream>

//------------------------------------------------------------------------------
//Files we are testing:
#include "includes/change/change.h"



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
    const int QUARTER = 25;
    const int DIME = 10;
    const int NICKEL = 5;
    const int PENNY = 1;
    
    //declare variables
    int quarters = 0, dimes = 0, nickels = 0, pennies = 0;
    int cents;
    
    char ans;
    do {
        //get cents from user
        Input(cents);
        cout << cents << " Cents is: " << endl;
        
        Change(quarters, cents, QUARTER);
        Change(dimes, cents, DIME);
        Change(nickels, cents, NICKEL);
        Change(pennies, cents, PENNY);
        
        //output results
        Output(quarters, dimes, nickels, pennies);
        
        cout << "again? ";
        cin >> ans;
    } while (ans == 'y');
}

void testB(bool debug)
{
    // TODO: add more test here
}


/*


---------running basic_test---------

: 99
99 Cents is: 
    3 quarters
    2 dimes
    0 nickels
    4 pennies
again? y
: 299
299 Cents is: 
   11 quarters
    2 dimes
    0 nickels
    4 pennies
again? n



------------- D O N E --------------



-----------running testB------------



------------- D O N E --------------

*/