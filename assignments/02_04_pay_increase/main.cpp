/**
 * @author:
 * @project:
 * @purpose:
 * @date:
 */

#include <iostream>

using namespace std;

int main()
{
    // TODO: initialize variable

    char ans;
    do {
        // TODO: add code
        
        cout << "again? ";
        cin >> ans;
    } while (ans == 'y');

    return 0;
}


/*
Output:

   Annual salary: 100000
      Old salary: 100000.00
        Increase: 12.00%
      new salary: 112000.00
monthly increase: 1000.00
           retro: 6000.00
again? y
   Annual salary: 12345
      Old salary: 12345.00
        Increase: 12.00%
      new salary: 13826.40
monthly increase: 123.45
           retro: 740.70
again? n
*/
