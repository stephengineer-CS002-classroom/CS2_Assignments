# 05_03_date_lib

- Accept [05_03_date_lib](https://classroom.github.com/a/pB4iHKWv)
- Get [main.cpp](main.cpp)
- Get [date_lib.h](date_lib.h)


## Function

Write the following date library functions to be used in date application or any application that may need date arithmetics.

```c++
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
void day_of_year_to_date(int &m, int &d, int y, int days);  //add days to m/d to get new date m/d
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
```


## Application

Write an application to produce the following output: User is presented with a menu of four items: change date A, change date B, change number n or exit. Once the user inputs date A/B or n, the program shows the date arithmetics:

1. DateA - DateB = x
1. DateA + n = mm/dd/yyyy
1. DateA - n = mm/dd/yyyy


## Note

- EPOCH is a const integer in your header file means the first year of your calculation
- All-day numbers are zero-based, so 01/01/1970 is day 0 and 01/02/1970 is day 1
- Avoid repeated code to call your implemented functions
- Do a top/down design: Figure out what functions depend on which. Find out what functions are high level and what functions are low level
- Please check the correctness of your calculations (and indicate on the output that you have done so) using [this](https://calendarhome.com/calculate/days-between-2-dates) or similar websites
