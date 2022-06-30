# 02_01_math_variables

- Accept [02_01_math_variables](https://classroom.github.com/a/4gEBkEq-)
- Get [main.cpp](main.cpp)

## Objectives

To gain experience with
- input
- output
- variable usage
- running programs in IDE

## Exercise 1: Mathematical Operations (with integers)

Write a program that accepts 2 integer values from the user.

Your program should then output the sum, the product, the integer quotient, and the modulus in exactly the same format as the examples. 


## Exercise 2: Mathematical Operations (with floating point)

The program will sum six numbers provided as input by the user, and then output the sum and the average of the numbers.

You have 6 measurements (what data type will you use to hold measurements?) from a scientific experiment, and you need the sum and the average of these measurements. Write a program to take in the six numbers from the standard input (cin) with the input operator (“>>”), and sum them. Then divide by the number of values (6) to get the average.

Output the sum and the average and set precision to 1 with fixed decimal.

Notice that even though we divided the sum (which is a floating point number) by the count (an integer), the resulting average is floating point: when you mix the two types in an arithmetic expression, floating point (the more “precise” type) “wins”.


## Exercise 3: Target Heart Rate

There is a formula that will calculate your target heart rate zone for aerobic exercise:

> Lower limit (bpm) = 60% of the difference between 220 and your age
>
> Upper limit (bpm) = 75% of the difference between 220 and your age


Your program will take a user's age from standard input (cin), and output (cout) their target heart rate zone, showing both the lower and upper limits, as floating-point values. Set precision to 2 with fixed decimal.
