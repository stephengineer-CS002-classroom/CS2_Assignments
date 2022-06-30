#ifndef TWOD_H
#define TWOD_H

#include <iostream>
#include <iomanip>

#include "../array_functions/array_functions.h"

//maximum row size
const int ROW_SIZES = 12;
//capacity of a row
const int CAPACITY = 10;
//generate a number in [low, high]
int random(int low, int high);
//random generate matrix
void init(int a[][CAPACITY], int sizes[], int row, int col);
//add item to the end of the row
void append(int a[][CAPACITY], int sizes[], int item, int row);
//insert item before mark position
void insert_before(int a[][CAPACITY], int sizes[], int item, int row, int col);
//insert item after mark position
void insert_after(int a[][CAPACITY], int sizes[], int item, int row, int col);
//remove item at the mark position
void remove(int a[][CAPACITY], int sizes[], int row, int col);
//modify cursor to position of key if found key
void search(int a[][CAPACITY], int sizes[], int key, int& row, int& col);
//reverse the order of elements in row
void reverse(int a[][CAPACITY], int sizes[], int row);
//remove all repeated items (save only one)
void delete_repeats(int a[][CAPACITY], int sizes[], int row);
//sort row in ascending or descending order
void sort(int a[][CAPACITY], int sizes[], int row, bool ascending = true);
//move left cursor
void cursor_left(int& col);
//move right cursor
void cursor_right(int sizes[], int row, int& col);
//move down cursor to down
void cursor_down(int sizes[], int& row, int& col);
//move up cursor
void cursor_up(int sizes[], int& row, int& col);
//move cursor to beginning [0, 0]
void cursor_home(int sizes[], int& row, int& col);
//move cursor to last item of matrix
void cursor_end(int sizes[], int& row, int& col);


// Definition
//generate a number in [low, high]
int random(int low, int high)
{
  int range = high-low+1;
  int randomNumber = low + (rand() % range);
  return randomNumber;
}

//random generate matrix
void init(int a[][CAPACITY], int sizes[], int row, int col)
{
  for (int i=0; i<ROW_SIZES; i++)
  {
    // sizes[i] = random(0, CAPACITY);
    for (int j=0; j<sizes[i]; j++) {
      // a[i][j] = random(0, 99);
      // Github test use
      a[i][j] = i + j;
    }
  }
}

// TODO: more definitions

#endif // TWOD_H