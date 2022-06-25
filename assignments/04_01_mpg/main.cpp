/**
 * @author:
 * @project:
 * @purpose:
 * @date:
 */

#include <iostream>

using namespace std;

// TODO: define global variable before function declaration
// const VARIABLE_TYPE LITER_TO_GALLON = 0.264179;

// TODO: declare function
// RETURN_TYPE mpgCalculator(PARAMETER_TYPE PARAMETER_NAME, ...);

int main()
{
    // TODO: initialize variable

    char ans;
    do {
        // TODO: read in the number of liters of gasoline and the number of miles

        // TODO: input data for two cars and output the MPGs

        cout << "again? ";
        cin >> ans;
    } while (ans == 'y');

    return 0;
}

// TODO: define function
// RETURN_TYPE mpgCalculator(PARAMETER_TYPE PARAMETER_NAME, ...)
// {
//     // TODO: function code
//     return {variable_with_same_type_as_function_return_type}
// }


/*
Output:

Enter the number of liters of gas consumed: 18
Enter the number of miles traveled: 100
This car gets 21.0295 miles per gallon.
Car 1 liters: 50
Car 1 miles: 300
Car 2 liters: 65
Car 2 miles: 400
MPG 1: 22.7119
MPG 2: 23.2942
car 2 has better mileage
again? n
*/
