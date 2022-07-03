# 04_03_sum_primes

- Accept [04_03_sum_primes](https://classroom.github.com/a/4zxfO2qH)
- Get [main.cpp](main.cpp)
- Get [sum_primes.h](sum_primes.h)


## Function

- Declare following functions in `includes/sum_primes/sum_primes.h`
- Implement following functions in `includes/sum_primes/sum_primes.cpp`


The `SumDigits` function takes in an integer parameter and computes and returns the sum of its digits. If the incoming integer is negative, then disregard the negative (and still compute the sum of the digits, as a positive result).

The `isPrime` function takes in an integer parameter and determines whether or not it is prime. The function should return true if it is a prime number, otherwise return false. (Hint: The % operator is good for checking for divisibility of one integer by another) 


## TestB

### SumDigits
1. enters a loop, in which the user is prompted and allowed to enter any integer (0 to exit the loop)
1. the integer is passed to the `SumDigits()` function, and print result
1. the user should keep being asked for inputs until they type a 0 to exit.

### isPrime
1. asks the user to input two positive integers N1 and N2 (you may assume the smaller number will be input first).
1. call `IsPrime()` function, find and print all the prime numbers between N1 and N2, where the output has 8 numbers per line (you can use tab characters to separate numbers on a line).
