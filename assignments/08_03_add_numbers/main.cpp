/**
 * @author:
 * @project:
 * @purpose:
 * @date:
 */

#include <iostream>

//------------------------------------------------------------------------------
//Files we are testing:
#include "includes/add_numbers/add_numbers.h"



//------------------------------------------------------------------------------

using namespace std;

int main()
{
    char ans;
    const int CAPACITY = 100; // max digits of a number
    // TODO: init variables

    do {
        // TODO: collecting base

        // TODO: collecting first number

        // TODO: collecting second number

        // processing
        Add(num1, num2, result, base);
        
        // TODO: output result

        // ask again
        cout << "again? ";
        cin >> ans;
    } while (ans == 'y');
    return 0;
}

/*
base: 20
base: 1
base: 10
num1: 999
num2: 9
999 + 9 = 1008
again? y
base: 2
num1: 111
num2: 1
111 + 1 = 1000
again? y
base: 16
num1: ffff
num2: f
ffff + f = 1000E
again? y
base: 8
num1: 777
num2: 7
777 + 7 = 1006
again? n
*/