# 04_01_mpg

- Accept [04_01_mpg](https://classroom.github.com/a/hbfPDhOh)
- Get [main.cpp](main.cpp)


## Objectives

- understand the concepts of return type, parameter list, and argument list
- be able to declare, define, and invoke basic functions


## Description

A liter is 0.264179 gallons. Write a program that will read in the number of liters of gasoline consumed by the user’s car and the number of miles traveled by the car and will then output the number of miles per gallon the car delivered. Your program should allow the user to repeat this calculation as often as the user wishes. Define a function (call the function mpgCalculator) to compute the number of miles per gallon. Your program should use a globally defined constant for the number of liters per gallon.

Next, modify your program so that it will take input data for two cars and output the number of miles per gallon delivered by each car. Your program will also announce which car has the best fuel efficiency (highest number of miles per gallon). To find out which car has better mileage, calculate MPG for both cars and make use of the ternary operator:

```c++
string car = mpg1 > mpg2 ? '1' : '2';
```


## Notes

- All of your cout statements should be in main, NOT inside the functions.  You will receive a zero if there are any cout statements inside your function.
- There should only be ONE global variable (the liter to gallon conversion constant).  Global variables are defined prior to main.
- You need to figure out what the return type is and how many arguments need to be passed to the function.
- Make sure your program includes both a function prototype and a function definition.
