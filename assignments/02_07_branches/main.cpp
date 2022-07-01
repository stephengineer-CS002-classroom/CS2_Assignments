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

Which exercise? 1
Enter a number of seconds: 1234500
There is 14 days in 1234500 seconds
again? y
Which exercise? 1
Enter a number of seconds: 79
There is 1 minute in 79 seconds
again? y
Which exercise? 1
Enter a number of seconds: 36089
There is 10 hours in 36089 seconds
again? y
Which exercise? 1
Enter a number of seconds: 3608
There is 1 hour in 3608 seconds
again? y
Which exercise? 2
Exercise 2:
What do you want to do tonight?
a. Go to the movies
b. Eat out
c. Hang out at the Mall
d. Go watch the Dodgers
a
I know just the movie to see!
again? y
Which exercise? 2
Exercise 2:
What do you want to do tonight?
a. Go to the movies
b. Eat out
c. Hang out at the Mall
d. Go watch the Dodgers
B
Great! I've been wanting to try that new Tuvaluan restaurant!
again? y
Which exercise? 2
Exercise 2:
What do you want to do tonight?
a. Go to the movies
b. Eat out
c. Hang out at the Mall
d. Go watch the Dodgers
C
You bring the cash!
again? y
Which exercise? 2
Exercise 2:
What do you want to do tonight?
a. Go to the movies
b. Eat out
c. Hang out at the Mall
d. Go watch the Dodgers
D
Take me out to the ball game
again? y
Which exercise? 2
Exercise 2:
What do you want to do tonight?
a. Go to the movies
b. Eat out
c. Hang out at the Mall
d. Go watch the Dodgers
k
Nothing suits you, then? I guess we’ll just stay and program!
again? n
*/
