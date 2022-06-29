#ifndef array_functions_h
#define array_functions_h

#include <iostream>

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
//swap values of a and b
void swap(int& a, int& b);
//sort a[] in ascending or descending order
void sort(int a[], int num_used, bool ascending=true);

// TODO

// Definition

#endif // array_functions_h