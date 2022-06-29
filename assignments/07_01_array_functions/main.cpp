/**
 * @author:
 * @project:
 * @purpose:
 * @date:
 */

#include <iostream>

//------------------------------------------------------------------------------
//Files we are testing:
#include "includes/array_functions/array_functions.h"



//------------------------------------------------------------------------------

using namespace std;

void basic_test(bool debug=false);
void testB(bool debug=false);

//print the array
void print_array(int a[], int num_used);

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
    const int CAPACITY = 15;
    int a[CAPACITY] = {3, 4, 5};
    int numUsed = 3;
    cout << "My array is:\n";
    print_array(a, numUsed);
    
    cout << "append 4 in the end:\n";
    append(a, numUsed, 4);
    print_array(a, numUsed);
    
    cout << "shift position 1 to left:\n";
    shift_left(a, numUsed, 1);
    print_array(a, numUsed);
    
    cout << "shift position 1 to right:\n";
    shift_right(a, numUsed, 1);
    print_array(a, numUsed);
    
    cout << "inset 7 before position 1:\n";
    insert_before(a, numUsed, 7, 1);
    print_array(a, numUsed);
    
    cout << "inset 1 after position 1:\n";
    insert_after(a, numUsed, 1, 1);
    print_array(a, numUsed);
    
    cout << "remove number on position 2:\n";
    remove(a, numUsed, 2);
    print_array(a, numUsed);
    
    int index = search(a, numUsed, 7);
    cout << "search 7 in array, position index: " << index << endl;
    
    cout << "append array b at the end of array a:\n";
    int b[] = {2,2,2};
    int b_used_num = 3;
    append_array(a, numUsed, b, b_used_num);
    print_array(a, numUsed);
    
    cout << "reversed array a:\n";
    reverse(a, numUsed);
    print_array(a, numUsed);
    
    cout << "after delete repeats:\n";
    delete_repeats(a, numUsed);
    print_array(a, numUsed);
    
    cout << "ascending sort:\n";
    sort(a, numUsed, 1);
    print_array(a, numUsed);
    
    cout << "descending sort:\n";
    sort(a, numUsed, 0);
    print_array(a, numUsed);
}

void testB(bool debug)
{
    // TODO: add more test here
}

void print_array(int a[], int num_used)
{
    for (int i = 0; i < num_used; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

/*


---------running basic_test---------

My array is:
3 4 5 
append 4 in the end:
3 4 5 4 
shift position 1 to left:
3 5 4 
shift position 1 to right:
3 5 5 4 
inset 7 before position 1:
3 7 5 5 4 
inset 1 after position 1:
3 7 1 5 5 4 
remove number on position 2:
3 7 5 5 4 
search 7 in array, position index: 1
append array b at the end of array a:
3 7 5 5 4 2 2 2 
reversed array a:
2 2 2 4 5 5 7 3 
after delete repeats:
2 4 5 7 3 
ascending sort:
2 3 4 5 7 
descending sort:
7 5 4 3 2 


------------- D O N E --------------



-----------running testB------------



------------- D O N E --------------

*/