# 07_05_2d_array_navigation

- Accept [07_05_2d_array_navigation](https://classroom.github.com/a/DbN2N8oY)
- Get [main.cpp](main.cpp)
- Get [twod.h](twod.h)

## Description

Implement 2D array functions in `twod.h` file, you should call functions in `array_functions.h` to make 2D array functions clean.


## Initliaze Matrix

- Create `int sizes[ROWS]={0};` to hold the num_used for each row.
- Fill out the sizes array by generating random numbers from 0 to CAPACITY.
- Fill out rows of matrix by generating random numbers from 0 to 99 according to sizes array.

We call step 3 is RANDOM NUMBER OF RANDOM NUMBERS.


For tests use:
- `int sizes[ROW_SIZES] = {10, 1, 9, 10, 5, 9, 1, 4, 0, 9, 3, 1};`
- `a[i][j] = i + j;`


## Note

- The user will use the number pad keys or keyboard keys [4/G]left [6/J]right [8/Y]up [2/N]down [7/H]ome(0,0) [1/E]nd(last,last) [M]ove_cursor to move around the array. Implementing diagonal keys would be pretty cool too but not a requirement.
- The user can do insert_before, insert_after, append a number on the current row.
- The user can add random number to the end of row.
- The user can delete the cursor's cell.
- The user can search the entire matrix for an item and have the cursor rest on that item if found the item.
- The user can reverse, delete_repeated and sort in ascending or descending order on ALL rows..


## Solution

### main() function

- Declares major variables: the 2D integer array, row, column, etc.
- Contains a loop that takes commands and calls appropriate functions: Cursor movements, Insert, Append, Delete, Random, etc.
- Call display_matrix after every iteration of the loop

### Important parameter

- I pass sizes[row] to the append, insert and delete functions passed by reference.  sizes[row] means how many numbers in each row are saved into an int array.

### Cursor

- Is implemented using two integers. Let's call them row and col
- Row and col stay within the range 0 ~ MaxRows and 0 ~ num_used in the current row.
- If there are no elements in that row, I set the col to -1 (this flags the deal with the cursor on an empty row)
- Move the cursor by incrementing and decrementing row and col


### Function display_matrix

- Print cursor position and num_used for current row.
- If the cursor is on a given row, just print out array.
- If the row you are printing with the cursor on this row print bracket on the item.
- If the row has no items, it will have a col of -1,  just print a "[:]" at the start of the line.
