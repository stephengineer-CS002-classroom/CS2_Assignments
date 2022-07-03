# 08_03_add_numbers

- Accept [08_03_add_numbers](https://classroom.github.com/a/ksVS8iDN)
- Get [main.cpp](main.cpp)


## Add Numbers at Any Base

Create `add_numbers.h` header file to implement the following function. We will use an array of chars (a cstring) to write a single function that will add any two numbers in any base.

## Function

```c++
void Add(char num1[], char num2[], char result[], int base);
```


### Function Add

The application program (main function) will acquire two numbers from the user's input (or from another source) in form of two cstrings num1 and num2. We assume the user’s input is less than CAPACITY=100. We assume the result[ ] is big enough to hold num1 + num2, and the base is a positive integer in the range [2, 16] 


### Things to watch out for

- You may NOT use any of the built-in cstring functions. We will be using the cstring functions we have written. if more functions are needed, then write them and add them to your cstring header file.
- Do NOT convert the two numbers to decimal. If num1 or num2 is 100 digits, there is no numerical variable that is big enough to hold a number that big.
- We will add the two numbers one digit at a time and keep track of the carry.
- Each digit is converted to decimal before it is processed. Do NOT convert all the digits all at once. We convert digits one digit at a time, add them and move on to the next digit.
- User can input either lowercase or uppercase, output result should be uppercase.
- Since num1 and num2 might be different lengths, it is much easier to reverse the strings before performing the addition of digits.
- You will need a pair of functions to convert a digit to an integer ('4' -> 4 and 'F' -> 15) and vice versa: (4 -> '4', and 15->'F')

Verify your answer [here](https://www.inchcalculator.com/base-calculator/).
