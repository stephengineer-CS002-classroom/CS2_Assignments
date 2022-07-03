#ifndef FREQUENCY_H
#define FREQUENCY_H

#include <iostream>
#include <iomanip>

using namespace std;

// swap values of a and b
void swap(int& a, int& b);
// sort a[] and c[] in ascending or descending order respect to a[]
void sort(int a[], int c[], int num_used, bool ascending=true);
// count frequency table and modify original array
void frequency(int a[], int c[], int num_used, int& unique_num);

// TODO

// Definition

#endif // FREQUENCY_H