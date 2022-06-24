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
    int ex;
    char ans;
    do {
        cout << "Which exercise? ";
        cin >> ex;
        if (ex == 1) {
            // TODO: Exercise 1
        } else if (ex == 2) {
            // TODO: Exercise 2
        } else {
            cout << "There is no exercise: #" << ex << endl;
        }
        cout << "again? ";
        cin >> ans;
    } while (ans == 'y');
    return 0;
}


/*
Output:

Enter purchase amount: 18.89
Enter amount received: 20
Total Change: $1.11

dollars 1
quarters 0
dimes 1
nickels 0
pennies 1
again? y
Enter purchase amount: 25.56
Enter amount received: 40
Total Change: $14.44

dollars 14
quarters 1
dimes 1
nickels 1
pennies 4
again? n
*/
