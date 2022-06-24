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

enter number between 1000 and 3000: 2019
thousands: 2
hundreds: 0
tens: 1
ones: 9
2019 = MMXIX
again? y
enter number between 1000 and 3000: 2999
thousands: 2
hundreds: 9
tens: 9
ones: 9
2999 = MMCMXCIX
again? y
enter number between 1000 and 3000: 999
enter number between 1000 and 3000: 3001
enter number between 1000 and 3000: 1000
thousands: 1
hundreds: 0
tens: 0
ones: 0
1000 = M
again? n
*/
