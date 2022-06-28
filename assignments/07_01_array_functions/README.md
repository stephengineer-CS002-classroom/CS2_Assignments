# 07_01_array_functions

- Accept [07_01_array_functions](https://classroom.github.com/a/6Wp7klhw)
- Get [main.cpp](main.cpp)
- Get [array_functions.h](array_functions.h)


## Low-Level Functions

Create a header file called `array_functions.h` and implement functions inside the header file. Functions should be able to perform the tasks any time array manipulations are needed. Pass the array, the position, the size or num_used (number of interesting elements), and items where they are needed. Avoid unnecessary arguments. The array's CAPACITY is a constant integer and is not passed into the functions (not a global variable). For now, set CAPACITY to 15. (while debugging, you may want to set the CAPACITY to 5 so you don't have to keep entering numbers.)


## List of array functions


```c++
//add item to the end of the array
void append(int a[], int& num_used, int item);
//shift the elements in the array left
void shift_left(int a[], int& num_used, int position);
//shift the elements of the array right
void shift_right(int a[], int& num_used, int position);
//insert item before mark position
void insert_before(int a[], int& num_used, int item, int position);
//insert item after mark position
void insert_after(int a[], int& num_used, int item, int position);
//remove item at the mark position
void remove(int a[], int& num_used, int position);
//return position of key in array, else: -1
int search(int a[], int num_used, int key);
//append src array to the end of dest array
void append_array(int dest[], int& dest_num_used, int src[], int src_num_used);
//reverse the order of elements in a[]
void reverse(int a[], int num_used);
//remove all repeated items (save only one)
void delete_repeats(int a[], int& num_used);
// swap values of a and b
void swap(int& a, int& b);
//sort a[] in ascending or descending order
void sort(int a[], int num_used, bool ascending);
```