#ifndef DATE_LIB_H
#define DATE_LIB_H

#include <iostream>
#include <iomanip>

using namespace std;

// Declaration

const int EPOCH = 1970;

bool is_leap(int y);                                        //true if y is a leap year
int day_in_month(int m, int y);                             //number of days in m/y

bool date_is_valid(int m, int d, int y);                    //true if m/d/y is valid
void date_input(int &m, int &d, int &y, string prompt=":"); //input a valid date with prompt

void date_output(int m, int d, int y);                      //output mm/dd/yyy

int num_of_leap_years(int y);                               //number of leap years since EPOCH exclude y
int day_of_year(int m, int d, int y);                       //days from 01/01/y to m/d/y
int day_of_years(int y);                                    //days from 01/01/EPOCH to 01/01/y
int day_number(int m, int d, int y);                        //days from 01/01/EPOCH to m/d/y
int date_subtract(int end_m, int end_d, int end_y, int start_m, int start_d, int start_y); 
                                                            //return days of dateEnd - dateStart

int year_size(int y);                                       //365 or 366 days
void day_of_year_to_date(int &m, int &d, int y, int days);  //add days to 1/1/y to get new date m/d
void day_to_date(int &m, int &d, int &y, int days);         //add days to 01/01/EPOCH to get new date m/d/y
void date_add(int &m, int &d, int &y, int days);            //dateA + n days

// show calculation:
// 1. DateA - DateB = x
// 2. DateA + n = mm/dd/yyyy
// 3. DateA - n = mm/dd/yyyy
void show_calculation(int start_m, int start_d, int start_y, int end_m, int end_d, int end_y, int n);

// show dates information:
// 1. Date A: mm/dd/yyyy
// 2. Date B: mm/dd/yyyy
// 3. n: 10
void show_dates(int start_m, int start_d, int start_y, int end_m, int end_d, int end_y, int n);

#endif // DATE_LIB_H