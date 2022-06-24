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

n: 1
   [   1  ]
again? y
n: 2
   [   1,   1  ]
again? y
n: 3
   [   1,   1,   2  ]
again? y
n: 4
   [   1,   1,   2,   3  ]
again? y
n: 10
   [   1,   1,   2,   3,   5,   8,  13,  21,  34,  55  ]
again? y
n: 20
   [   1,   1,   2,   3,   5,   8,  13,  21,  34,  55,  89, 144, 233, 377, 610, 987,1597,2584,4181,6765  ]
again? n
*/
