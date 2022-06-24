# 02_02_arithmetic_operations

- Accept [02_02_arithmetic_operations](https://classroom.github.com/a/pRSVQ2xq)
- Get [main.cpp](main.cpp)

## Objectives

To gain experience with

- utilizing various math functions
- using the modulus operator
- word problems
- char data type


## Exercise 1: ISBN Checksum

### Assignment Specifications

A ten-digit ISBN number uses a checksum as its last digit to verify the first nine digits are valid. Before 2007, all ISBN numbers were composed like this, such as 0-20-508005-7 or 1-234-56789-X. The first nine digits are assigned by a book’s publisher and the last digit is calculated by “weighted sum” (described below). The X stands for the checksum value of 10, in order to represent ten as a single digit.

### Your Assignment

You must write a program that calculates and outputs this checksum value given the first nine digits of the ISBN number,  utilizing the checksum algorithm below.

### ISBN Checksum Algorithm

To compute the weighted sum we start from the left-most digit:
Sum one times the first digit, plus two times the second digit,  plus three times the third, etc. all the way to nine times the ninth digit.

**Note**: Just because we describe the calculation as "starting with the left-most digit" does NOT mean that that is the best order for the C++ algorithm! Plan carefully for the simplest way of isolating each digit from the whole number.

Next, we take this weighted sum and calculate the remainder after it is divided by eleven.

(i.e. "weighted sum modulo eleven")

Finally, the ISBN standard requires that we take this checksum digit and convert it if needed (i.e. 10 is replaced by X).  We will omit this step and just output the value from 0 through 10 without any conversion.

### Input/Output Requirements

Your main function must prompt the user to enter the first 9 digits of an ISBN, and then read in that input as a single integer.

**NOTE: You may not use strings or string variables in this exercise.**

Your program must then calculate the corresponding checksum, and output it as shown in the example run below.

Test Values (Single program execution per row)

| ISBN (first 9-digits) | Checksum Value |
| --------------------- | -------------- |
| 123456789             | 10             |
| 000000000             | 0              |
| 987654321             | 0              |
| 047147063             | 5              |

### Calculations 

- (1x1 + 2x2 + 3x3 + 4x4 + 5x5 + 6x6 + 7x7 + 8x8 + 9x9) % 11 = 10
- (1x0 + 2x0 + 3x0 + 4x0 + 5x0 + 6x0 + 7x0 + 8x0 + 9x0) % 11 = 0
- (1x9 + 2x8 + 3x7 + 4x6 + 5x5 + 6x4 + 7x3 + 8x2 + 9x1) % 11 = 0
- (1x0 + 2x4 + 3x7 + 4x1 + 5x4 + 6x7 + 7x0 + 8x6 + 9x3) % 11 = 5



## Exercise 2: Character arithmetic

Although it might seem odd, the char data type (which we use for storing character data - i.e. the symbols on a keyboard) is actually a variant of the integer data type: it is just a number representing the ASCII code for characters. Since it only occupies 1 byte (8-bits) of memory, it can only store very small numbers, from -128 to +127 (the positive numbers represent the standard keyboard symbols: letters, numbers, punctuation, etc).

Since it is just a number, we can do some interesting character manipulations with arithmetic - which will come in handy later on when we try our hand at cryptography - but for now, we will just do some really simple operations.

First, try declaring a char variable and initializing it to different values (>= 32, and < 127) - and then output it to see what characters those numbers correspond to (e.g. what’s 32?) 

The exercise: Ask the user to input a letter, and output the position of that letter in the alphabet (starting with ‘a’ at position 1).  For this exercise, consider only lower case letters.

**Hint**: This problem should be done with just a couple of lines of code using character arithmetic.

**Note**: you do NOT need to know the ASCII decimal values for the letters to do this exercise!!

You only need to know that their values are all in sequence, as you would expect.  In fact, using the ASCII value, such as 97, 96, etc, will result in a zero.  
