/**
 * @author:
 * @project:
 * @purpose:
 * @date:
 */

#include <iostream>
#include <iomanip>

//------------------------------------------------------------------------------
//Files we are testing:
#include "includes/array_functions/array_functions.h"



//------------------------------------------------------------------------------

using namespace std;

//print array with position, size and cursor
void display_array(int a[], int num_used, int cursor);
//print menu on screen
void display_menu();
//print the array
void print_array(int a[], int num_used);


int main()
{
    // set seed
    srand(500);
    // declaration
    const int CAPACITY = 15;
    int array[CAPACITY] = {10, 15, 36, 9, 36, 18};
    int numUsed = 6; // how many numbers in array
    int cursor = 0;  // cursor position, starting at 0
    int item;        // the number will be operated
    int found;       // position of key search in array
    bool running = true;
    char command;
    
    // Display menu at beginning
    display_menu();
    while(running)
    {
        display_array(array, numUsed, cursor);
        cout << endl << endl;
        cout << ">> ";
        cin >> command;
        switch (command) 
        {
            
        // TODO

        default:
            cout << "{ Wrong Operation Command! }\n";
            break;
        }
    };
    cout << "Exit Array Navigation Application\n\n";
    cout << "---------------------------------\n\n";
    return 0;
}



//print array with position, size and cursor
void display_array(int a[], int num_used, int cursor)
{
    using namespace std;
    if (num_used == 0) {
        cout << "|-1/ -1:  0| {}";
    } else {
        cout << "|" << setw(2) << cursor << "/ " << setw(2) << num_used - 1 << ": " << setw(2) << num_used << "| ";
        cout << "{";
        for (int i = 0; i < num_used; i++){
            if (i == cursor){
            cout << "[" << setw(2) << a[cursor] << "] ";
            } else {
            cout << setw(3) << a[i] << "  ";
            }
        }
        cout << "}";
    }
}

//print menu on screen
void display_menu()
{
    using namespace std;
    cout << "---------------------------------------------------------------------" << endl;
    cout << "[A]ppend [B]efore a[f]ter [R]andom [D]elete [S]earch" << endl;
    cout << "     re[V]erse [U]nique [<]Descending [>]Ascending" << endl;
    cout << ".   .   .   .   .   .   .   .   .   .   .   .   .   .   .   .   ." << endl;
    cout << "[?]menu   [N]ext   [P]rev   [H]ome   [E]nd   e[X]it" << endl;
    cout << "---------------------------------------------------------------------" << endl << endl;
}

//print the array
void print_array(int a[],int num_used)
{
    using namespace std;
    for (int i = 0; i < num_used; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}


/*
---------------------------------------------------------------------
[A]ppend [B]efore a[f]ter [R]andom [D]elete [S]earch
     re[V]erse [U]nique [<]Descending [>]Ascending
.   .   .   .   .   .   .   .   .   .   .   .   .   .   .   .   .
[?]menu   [N]ext   [P]rev   [H]ome   [E]nd   e[X]it
---------------------------------------------------------------------

| 0/  5:  6| {[10]  15   36    9   36   18  }

>> a
>> 4
| 6/  6:  7| { 10   15   36    9   36   18  [ 4] }

>> a
>> 9
| 7/  7:  8| { 10   15   36    9   36   18    4  [ 9] }

>> n
| 7/  7:  8| { 10   15   36    9   36   18    4  [ 9] }

>> n
| 7/  7:  8| { 10   15   36    9   36   18    4  [ 9] }

>> p
| 6/  7:  8| { 10   15   36    9   36   18  [ 4]   9  }

>> p
| 5/  7:  8| { 10   15   36    9   36  [18]   4    9  }

>> p
| 4/  7:  8| { 10   15   36    9  [36]  18    4    9  }

>> p
| 3/  7:  8| { 10   15   36  [ 9]  36   18    4    9  }

>> b
>> -9
| 3/  8:  9| { 10   15   36  [-9]   9   36   18    4    9  }

>> f
>> 79
| 4/  9: 10| { 10   15   36   -9  [79]   9   36   18    4    9  }

>> ?
---------------------------------------------------------------------
[A]ppend [B]efore a[f]ter [R]andom [D]elete [S]earch
     re[V]erse [U]nique [<]Descending [>]Ascending
.   .   .   .   .   .   .   .   .   .   .   .   .   .   .   .   .
[?]menu   [N]ext   [P]rev   [H]ome   [E]nd   e[X]it
---------------------------------------------------------------------

| 4/  9: 10| { 10   15   36   -9  [79]   9   36   18    4    9  }

>> r
| 5/ 10: 11| { 10   15   36   -9   79  [ 0]   9   36   18    4    9  }

>> r
| 6/ 11: 12| { 10   15   36   -9   79    0  [45]   9   36   18    4    9  }

>> p
| 5/ 11: 12| { 10   15   36   -9   79  [ 0]  45    9   36   18    4    9  }

>> p
| 4/ 11: 12| { 10   15   36   -9  [79]   0   45    9   36   18    4    9  }

>> d
| 4/ 10: 11| { 10   15   36   -9  [ 0]  45    9   36   18    4    9  }

>> d
| 4/  9: 10| { 10   15   36   -9  [45]   9   36   18    4    9  }

>> d
| 4/  8:  9| { 10   15   36   -9  [ 9]  36   18    4    9  }

>> d
| 4/  7:  8| { 10   15   36   -9  [36]  18    4    9  }

>> d
| 4/  6:  7| { 10   15   36   -9  [18]   4    9  }

>> d
| 4/  5:  6| { 10   15   36   -9  [ 4]   9  }

>> d
| 4/  4:  5| { 10   15   36   -9  [ 9] }

>> d
| 3/  3:  4| { 10   15   36  [-9] }

>> d
| 2/  2:  3| { 10   15  [36] }

>> d
| 1/  1:  2| { 10  [15] }

>> d
| 0/  0:  1| {[10] }

>> d
|-1/ -1:  0| {}

>> d
|-1/ -1:  0| {}

>> d
|-1/ -1:  0| {}

>> b
>> 34
|-1/ -1:  0| {}

>> f
>> 33
|-1/ -1:  0| {}

>> a
>> 5
| 0/  0:  1| {[ 5] }

>> r
| 1/  1:  2| {  5  [81] }

>> r
| 2/  2:  3| {  5   81  [37] }

>> r
| 3/  3:  4| {  5   81   37  [98] }

>> r
| 4/  4:  5| {  5   81   37   98  [77] }

>> r
| 5/  5:  6| {  5   81   37   98   77  [19] }

>> r
| 6/  6:  7| {  5   81   37   98   77   19  [67] }

>> r
| 7/  7:  8| {  5   81   37   98   77   19   67  [67] }

>> r
| 8/  8:  9| {  5   81   37   98   77   19   67   67  [51] }

>> r
| 9/  9: 10| {  5   81   37   98   77   19   67   67   51  [23] }

>> r
|10/ 10: 11| {  5   81   37   98   77   19   67   67   51   23  [27] }

>> r
|11/ 11: 12| {  5   81   37   98   77   19   67   67   51   23   27  [95] }

>> r
|12/ 12: 13| {  5   81   37   98   77   19   67   67   51   23   27   95  [ 1] }

>> r
|13/ 13: 14| {  5   81   37   98   77   19   67   67   51   23   27   95    1  [78] }

>> r
|14/ 14: 15| {  5   81   37   98   77   19   67   67   51   23   27   95    1   78  [92] }

>> d
|13/ 13: 14| {  5   81   37   98   77   19   67   67   51   23   27   95    1  [78] }

>> b
>> 55
|13/ 14: 15| {  5   81   37   98   77   19   67   67   51   23   27   95    1  [55]  78  }

>> f
>> 66
|13/ 14: 15| {  5   81   37   98   77   19   67   67   51   23   27   95    1  [55]  78  }

>> s
>> 53
|13/ 14: 15| {  5   81   37   98   77   19   67   67   51   23   27   95    1  [55]  78  }

>> s
>> 81
| 1/ 14: 15| {  5  [81]  37   98   77   19   67   67   51   23   27   95    1   55   78  }

>> <
| 1/ 14: 15| { 98  [95]  81   78   77   67   67   55   51   37   27   23   19    5    1  }

>> >
| 1/ 14: 15| {  1  [ 5]  19   23   27   37   51   55   67   67   77   78   81   95   98  }

>> u
| 0/ 13: 14| {[ 1]   5   19   23   27   37   51   55   67   77   78   81   95   98  }

>> a
>> 44
|14/ 14: 15| {  1    5   19   23   27   37   51   55   67   77   78   81   95   98  [44] }

>> r
|14/ 14: 15| {  1    5   19   23   27   37   51   55   67   77   78   81   95   98  [44] }

>> v
| 0/ 14: 15| {[44]  98   95   81   78   77   67   55   51   37   27   23   19    5    1  }

>> x
Exit Array Navigation Application

---------------------------------

*/