/**
 * @author:
 * @project:
 * @purpose:
 * @date:
 */

#include <iostream>
#include <string>

//------------------------------------------------------------------------------
//Files we are testing:
#include "includes/frequency/frequency.h"



//------------------------------------------------------------------------------

using namespace std;

void basic_test(bool debug=false);
void testB(bool debug=false);

// display frequency table
void display_two_array(int a[], int c[], int unique_num);


int main()
{
    // BASIC TEST
    cout << "\n\n---------running basic_test---------\n\n";
    basic_test();
    cout << "\n\n------------- D O N E --------------\n\n";

    // TEST B
    cout << "\n\n-----------running testB------------\n\n";
    testB();
    cout << "\n\n------------- D O N E --------------\n\n";

    return 0;
}


void basic_test(bool debug)
{
    //Declaration
    const int CAPACITY = 100; // at most 100 numbers
    int arr[CAPACITY], count[CAPACITY];
    int numUsed;   // total numbers in array
    int uniqueNum; // how many different number
    char ans;

    do {
        numUsed = 0;
        uniqueNum = 0;

        cout << "Enter at most " << CAPACITY << " numbers:\n";

        getline(cin, line);
        
        // TODO: get every single number


        frequency(arr, count, numUsed, uniqueNum);

        cout << "\nFrequency Table:\n";
        display_two_array(arr, count, uniqueNum);

        cout << "again? ";
        cin >> ans;
    } while (ans == 'y');
}

void testB(bool debug)
{
    // TODO: add more test here
}


void display_two_array(int a[], int c[], int unique_num)
{
    using namespace std;
    unique_num++;
    sort(c, a, unique_num, false);
    cout << setw(8) << left << "Count" << setw(8) << "N" << endl;
    for(int i=0; i<unique_num; i++)
    {
        cout << setw(8) << left << c[i] << setw(8) << a[i] << endl;
    }
    cout<<endl<<endl;
}

/*


---------running basic_test---------

Enter at most 100 numbers:
1 3 1 5 7 1 4 1 5 2 1 2 1

Frequency Table:
Count   N       
6       1       
2       5       
2       2       
1       7       
1       4       
1       3       


again? n


------------- D O N E --------------



-----------running testB------------



------------- D O N E --------------

*/