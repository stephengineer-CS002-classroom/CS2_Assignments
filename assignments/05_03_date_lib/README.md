# 05_03_date_lib

- Accept [05_03_date_lib](https://classroom.github.com/a/pB4iHKWv)
- Get [main.cpp](main.cpp)
- Get [date_lib.h](date_lib.h)


## Function

Write the date library functions to be used in date application or any application that may need date arithmetics.


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
