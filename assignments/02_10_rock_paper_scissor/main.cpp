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

Player 1: r
Player 2: p
Rock v. Paper
Player 2 wins
again? y
Player 1: S
Player 2: p
Scissors v. Paper
Player 1 wins
again? y
Player 1: R
Player 2: r
Rock v. Rock
It's a TIE
again? y
Player 1: P
Player 2: w
Paper v. [ERROR: w not a valid move.]
again? y
Player 1: m
[ERROR: m not a valid move.]
again? n
*/
