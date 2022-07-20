/**
 * @author:
 * @project:
 * @purpose:
 * @date:
 */

#include <iostream>

//------------------------------------------------------------------------------
//Files we are testing:
#include "includes/date_lib/date_lib.h"



//------------------------------------------------------------------------------

using namespace std;

void basic_test(bool debug=false);
void testB(bool debug=false);

int main()
{
    // BASIC TEST
    cout << "\n\n---------running basic_test---------\n\n";
    basic_test();
    cout << "\n\n------------- D O N E --------------\n\n";

    // TEST B
    cout << "\n\n-----------running testB------------\n\n";
    testB();
    cout << "\n\n------------- D O N E --------------\n\n";

    return 0;
}


void basic_test(bool debug)
{
    int m, d, y, days;
    
    // test is_leap
    y = 2000;
    cout << y << " is leap year: " << boolalpha << is_leap(y) << endl;
    y = 2016;
    cout << y << " is leap year: " << boolalpha << is_leap(y) << endl;
    y = 2100;
    cout << y << " is leap year: " << boolalpha << is_leap(y) << endl;
    cout << endl;

    // test day_in_month
    for (int i=1; i<=12; i++) {
        cout << "days in " << setw(2) << i << "/" << y << ": " << day_in_month(i, y) << endl;
    }
    cout << endl;

    // test date_is_valid
    m = 3; d = 33; y = 2020;
    date_output(m, d, y);
    cout << " is valid: " << boolalpha << date_is_valid(m, d, y) << endl;
    m = 15; d = 3; y = 2020;
    date_output(m, d, y);
    cout << " is valid: " << boolalpha << date_is_valid(m, d, y) << endl;
    m = 2; d = 29; y = 2020;
    date_output(m, d, y);
    cout << " is valid: " << boolalpha << date_is_valid(m, d, y) << endl;
    cout << endl;

    // test num_of_leap_years
    cout << "There are " << num_of_leap_years(y) << " leap years from " \
        << EPOCH << " to " << y << "exclude " << y << endl;
    cout << endl;

    // test day_of_year
    cout << "There are " << day_of_year(m, d, y) << " days from ";
    date_output(1, 1, y);
    cout << " to ";
    date_output(m, d, y);
    cout << endl << endl;

    // test day_of_years
    cout << "There are " << day_of_years(y) << " days from ";
    date_output(1, 1, EPOCH);
    cout << " to ";
    date_output(1, 1, y);
    cout << endl << endl;

    // test day_number
    cout << "There are " << day_number(m, d, y) << " days from ";
    date_output(1, 1, EPOCH);
    cout << " to ";
    date_output(m, d, y);
    cout << endl << endl;

    // test date_subtract
    cout << "There are " << date_subtract(m, d, y, 5, 31, 1999) << " days from ";
    date_output(m, d, y);
    cout << " to ";
    date_output(5, 31, 1999);
    cout << endl << endl;

    // test year_size
    cout << "There are " << year_size(2000) << " days in 2000\n";
    cout << "There are " << year_size(2022) << " days in 2022\n";
    cout << endl;
    
    // test day_of_year_to_date
    days = 200; // days to add for day_of_year_to_date should less than year size
    m = 1, d = 1;
    cout << "After " << days << " days of ";
    date_output(m, d, y);
    day_of_year_to_date(m, d, y, days);
    cout << " is ";
    date_output(m, d, y);
    cout << endl << endl;

    // test day_to_date
    days = 4321;
    cout << "After " << days << " days of ";
    date_output(1, 1, EPOCH);
    day_to_date(m, d, y, days);
    cout << " is ";
    date_output(m, d, y);
    cout << endl << endl;

    // test date_add
    days = 9876;
    cout << "After " << days << " days of ";
    date_output(m, d, y);
    date_add(m, d, y, days);
    cout << " is ";
    date_output(m, d, y);
    cout << endl << endl;
}

void testB(bool debug)
{
    // Date Application

    // TODO: ask user input dateA, dateB, and n

    // TODO: show calculations
  
    // TODO: create a loop to display options allow user to operate
    
}

/*


---------running basic_test---------

2000 is leap year: true
2016 is leap year: true
2100 is leap year: false

days in  1/2100: 31
days in  2/2100: 28
days in  3/2100: 31
days in  4/2100: 30
days in  5/2100: 31
days in  6/2100: 30
days in  7/2100: 31
days in  8/2100: 31
days in  9/2100: 30
days in 10/2100: 31
days in 11/2100: 30
days in 12/2100: 31

03/33/2020 is valid: false
15/03/2020 is valid: false
02/29/2020 is valid: true

There are 12 leap years from 1970 to 2020exclude 2020

There are 59 days from 01/01/2020 to 02/29/2020

There are 18262 days from 01/01/1970 to 01/01/2020

There are 18321 days from 01/01/1970 to 02/29/2020

There are 7579 days from 02/29/2020 to 05/31/1999

There are 366 days in 2000
There are 365 days in 2022

After 200 days of 01/01/2020 is 07/19/2020

After 4321 days of 01/01/1970 is 10/31/1981

After 9876 days of 10/31/1981 is 11/14/2008



------------- D O N E --------------



-----------running testB------------

Date A: 2/1/1971 
Date B: 1/1/1972
n: 10

[01/01/1972] - [02/01/1971] = 334
[02/01/1971] + [10] = 02/11/1971
[02/01/1971] - [10] = 01/22/1971


[A]  [B]  [N]  [X]  >> n
n: 675
Date A: 02/01/1971
Date B: 01/01/1972
n: 675

[01/01/1972] - [02/01/1971] = 334
[02/01/1971] + [675] = 12/07/1972
[02/01/1971] - [675] = 03/28/1969


[A]  [B]  [N]  [X]  >> B
: 5/13/2001
Date A: 02/01/1971
Date B: 05/13/2001
n: 675

[05/13/2001] - [02/01/1971] = 11059
[02/01/1971] + [675] = 12/07/1972
[02/01/1971] - [675] = 03/28/1969


[A]  [B]  [N]  [X]  >> a
: 8/21/1989
Date A: 08/21/1989
Date B: 05/13/2001
n: 675

[05/13/2001] - [08/21/1989] = 4283
[08/21/1989] + [675] = 06/27/1991
[08/21/1989] - [675] = 10/16/1987


[A]  [B]  [N]  [X]  >> x
Date A: 08/21/1989
Date B: 05/13/2001
n: 675

[05/13/2001] - [08/21/1989] = 4283
[08/21/1989] + [675] = 06/27/1991
[08/21/1989] - [675] = 10/16/1987




------------- D O N E --------------

*/