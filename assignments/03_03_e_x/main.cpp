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

x: 20
iterations: 7
----- x: 20 -----
1/1 + 20/1 + 400/2 + 8000/6 + 160000/24 + 3.2e+06/120 + 6.4e+07/720
e^20 = 123776.55556             after 7 iterations
cmath exp(20) : 485165195.40979
again? y
iterations: 100
----- x: 20 -----
e^20 = 485165195.40979          after 100 iterations
cmath exp(20) : 485165195.40979
again? n
*/
