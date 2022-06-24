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

Maximum Capacity: 30
number of attendees: 30
you are at maximum capacity
again? y
Maximum Capacity: 35
number of attendees: 29
you may have additional 6 people
again? y
Maximum Capacity: 14
number of attendees: 56
kick out 42 people
again? n
*/
