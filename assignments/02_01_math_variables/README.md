# 02_01_math_variables

- Accept [02_01_math_variables](https://classroom.github.com/a/4gEBkEq-)
- Get [main.cpp](main.cpp)

## Lab Objectives

To gain experience with
- input
- output
- variable usage
- running programs in IDE

## Exercise 1: Mathematical Operations (with integers)

Write a program that accepts 2 integer values from the user, with the prompts shown.

For testing purposes, you have to output a newline after every user input (see examples below)

Your program should then output the sum, the product, the integer quotient, and the modulus in exactly the same format as the examples below. 

### Example Run
```
Which exercise? 1
Enter the first integer: 10
Enter the second integer: 25
10 + 25 = 35
10 * 25 = 250
10 / 25 = 0
10 % 25 = 10
again? n
```


## Exercise 2: Mathematical Operations (with floating point)

The program will sum six numbers provided as input by the user, and then output the sum and the average of the numbers.

You have 6 measurements (what data type will you use to hold measurements?) from a scientific experiment, and you need the sum and the average of these measurements. Write a program to take in the six numbers from the standard input (cin) with the input operator (“>>”), and sum them. Then divide by the number of values (6) to get the average.

Output the sum and the average.

Notice that even though we divided the sum (which is a floating point number) by the count (an integer), the resulting average is floating point: when you mix the two types in an arithmetic expression, floating point (the more “precise” type) “wins”.

### Example Run

```
Which exercise? 2
Enter six fp numbers on a single line, separated by spaces: 1.5 2.1 3.8 4.2 5.7 6.1
Sum of 1.5 + 2.1 + 3.8 + 4.2 + 5.7 + 6.1 = 23.4
Average = 3.9
again? n
```


## Exercise 3: Target Heart Rate

There is a formula that will calculate your target heart rate zone for aerobic exercise:

> Lower limit (bpm) = 60% of the difference between 220 and your age
> Upper limit (bpm) = 75% of the difference between 220 and your age


Your program will take a user's age from standard input (cin), and output (cout) their target heart rate zone, showing both the lower and upper limits, as floating-point values.
(Note that if a floating point value is an exact whole number - i.e. the decimal part is exactly .0 - C++ will drop the decimal in the display; so 731.0 will display as 731).

### Output
```
What is your age? 25
Your target heart rate is between 117 and 146.25 bpm.
```