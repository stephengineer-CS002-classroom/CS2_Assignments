# 07_02_array_functions_application

- Accept [07_02_array_functions_application](https://classroom.github.com/a/nf_xyvWy)
- Get [main.cpp](main.cpp)


## Low-Level Functions

You have already implemented all low-level functions in the `array_functions.h` file, so you can just include the header file in your main.cpp file.

## Functions

Implement the following functions in main.cpp

```c++
//print array with position, size and cursor
void display_array(int a[], int num_used, int cursor);
//print menu on screen
void display_menu();
```

### Function display_array

- Display cursor position and num_used (size) of the array.
- Displays the array with the cursor.
- The "current element" by displaying a set of brackets around the current element. We call this the "cursor". This is simply an integer that is passed into the display function. 
- You will move the cursor to left, right, beginning, or ending when the user chooses the items from the menu.
- The cursor will not go beyond the range of "interesting elements" in the array.

### Function display_menu
- display_menu function will display the menu.
- The menu is displayed once at the start of the program, whenever the user chooses '?' from the menu, or when the user enters an invalid choice. (Can you use numbers on a small keyboard to control your cursor? 4, 6, 7, 1)

```c++
void display_menu()
{
    using namespace std;
    cout << "---------------------------------------------------------------------" << endl;
    cout << "[A]ppend [B]efore a[f]ter [R]andom [D]elete [S]earch" << endl;
    cout << "     re[V]erse [U]nique [<]Descending [>]Ascending" << endl;
    cout << ".   .   .   .   .   .   .   .   .   .   .   .   .   .   .   .   ." << endl;
    cout << "[?]menu   [N]ext   [P]rev   [H]ome   [E]nd   e[X]it" << endl;
    cout << "---------------------------------------------------------------------\n\n";
}
```

## Note

- Use `srand(500)` to make random numbers same as the test suit.
- `const int CAPACITY=15;` is NOT a global variable or pass to any functions.
- Array functions do NOT maintain the cursor position.
- NONE of the functions will do input or output: the element to be inserted to or searched for is passed to the functions.
- display_array function should use `setw` to space the numbers. All numbers, including the number at the cursor, MUST line up in columns when you have several runs of the program on a page. This is crucial when you use this function in the 2D array application.
