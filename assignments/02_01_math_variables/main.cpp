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
        } else if (ex == 3) {
            // TODO: Exercise 3
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

Which exercise? 1
Enter the first integer: 10
Enter the second integer: 25
10 + 25 = 35
10 * 25 = 250
10 / 25 = 0
10 % 25 = 10
again? y
Which exercise? 2
Enter six fp numbers on a single line, separated by spaces: 1.5 2.1 3.8 4.2 5.7 6.1
Sum of 1.5 + 2.1 + 3.8 + 4.2 + 5.7 + 6.1 = 23.4
Average = 3.9
again? y
Which exercise? 3
What is your age? 25
Your target heart rate is between 117.00 and 146.25 bpm.
again? n
*/
