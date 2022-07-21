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
        // TODO: open input and output files

        // TODO: error check

        // TODO: read file and save data to output file and print them out

        // TODO: print out results

        // TODO: close file

        cout << "again? ";
        cin >> ans;
    } while (ans == 'y');

    return 0;
}


/*
Output:

Enter your baby's name: Justice
Justice is ranked 519 in popularity among boys.
Justice is ranked 518 in popularity among girls.
again? y
Enter your baby's name: Walter
Walter is ranked 376 in popularity among boys.
Walter is not ranked among the top 1000 girl names.
again? y
Enter your baby's name: Jose
Jose is ranked 72 in popularity among boys.
Jose is not ranked among the top 1000 girl names.
again? n
*/
