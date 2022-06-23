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

Which exercise? 1
Exercise 1:
Please enter the first 9 digits of the ISBN: 123456789
Checksum: 10
again?
y
Which exercise? 2
Exercise 2:
Enter a character: b
b is letter 2
again?
n
*/
