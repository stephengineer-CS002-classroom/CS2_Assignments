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

iterations: 7
4 * [+1/1-1/3+1/5-1/7+1/9-1/11+1/13]
after 7 iterations
Pi:   3.28374
M_PI: 3.14159
again? y
iterations: 20
after 20 iterations
Pi:   3.09162
M_PI: 3.14159
again? y
iterations: 100
after 100 iterations
Pi:   3.13159
M_PI: 3.14159
again? n
*/
