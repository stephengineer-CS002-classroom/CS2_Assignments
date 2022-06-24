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

cereal box in oz: 1
a 1.00 oz box of cereal is 0.0000283 tons
it takes 35273.92 boxes to make up one metric ton
again? y
cereal box in oz: 99.12
a 99.12 oz box of cereal is 0.0028100 tons
it takes 355.87 boxes to make up one metric ton
again? n
*/
