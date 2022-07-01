/**
 * @author:
 * @project:
 * @purpose:
 * @date:
 */

#include <iostream>

//------------------------------------------------------------------------------
//Files we are testing:
#include "includes/myCstrings/myCstrings.h"



//------------------------------------------------------------------------------

using namespace std;

// display menu options
void display_menu();


int main()
{
    char option;              // menu option
    bool running = true;      // run program

    // TODO: declare variables

    // TODO: ask user input
    
    // display menu
    display_menu();

    // start program
    do {
        cout << "\nEnter your menu selection: ";
        cin >> option;
        switch(option)
        {
            // TODO

            default:
                cout << "{ Wrong Operation Command! }";
                break;
        }
    } while (running);
    cout << "Goodbye!" << endl << endl;
    return 0;
}

/**
 * @brief to display the menu
 */
void display_menu()
{
    using namespace std;
    cout << "A)  Count the number of vowels in the string\n";
    cout << "B)  Count the number of consonants in the string\n";
    cout << "C)  Convert the string to uppercase\n";
    cout << "D)  Convert the string to lowercase\n";
    cout << "E)  Display the current string\n";
    cout << "F)  Enter another string\n";
    cout << "M)  Display this menu\n";
    cout << "X)  Exit the program" << endl;
}

/*
Input a line of text, up to 100 characters:
> The quick brown fox jumped. The lazy dog, he was jumped over.

A)  Count the number of vowels in the string
B)  Count the number of consonants in the string
C)  Convert the string to uppercase
D)  Convert the string to lowercase
E)  Display the current string
F)  Enter another string
M)  Display this menu
X)  Exit the program

Enter your menu selection: a
Number of vowels: 16

Enter your menu selection: B
Number of consonants: 31

Enter your menu selection: c

Enter your menu selection: e
The string:
THE QUICK BROWN FOX JUMPED. THE LAZY DOG, HE WAS JUMPED OVER.

Enter your menu selection: D

Enter your menu selection: E
The string:
the quick brown fox jumped. the lazy dog, he was jumped over.

Enter your menu selection: f
Input a new line of text, up to 100 characters:
> Mary Had A Little Lamb. His name was Fleecy Pete.

Enter your menu selection: C

Enter your menu selection: e
The string:
MARY HAD A LITTLE LAMB. HIS NAME WAS FLEECY PETE.

Enter your menu selection: d

Enter your menu selection: E
The string:
mary had a little lamb. his name was fleecy pete.

Enter your menu selection: b
Number of consonants: 24

Enter your menu selection: a
Number of vowels: 14

Enter your menu selection: x
Goodbye

*/