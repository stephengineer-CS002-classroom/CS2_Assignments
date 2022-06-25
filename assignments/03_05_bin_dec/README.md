# 03_05_bin_dec

- Accept [03_05_bin_dec](https://classroom.github.com/a/ZLU8lR8p)
- Get [main.cpp](main.cpp)

## Description

- Convert binary string to decimal integer
- Convert decimal integer to binary integer


## [Binary to Decimal](https://www.rapidtables.com/convert/number/binary-to-decimal.html)

Implement:

```c++
int binary_2_decimal(string bin);
```

### Algorithm

For binary number with n digits:

$d_{n-1} \cdots d_3 d_2 d_1 d_0$

The decimal number is equal to the sum of binary digits (dn) times their power of 2 ($2^n$):

$decimal = d_0×2^0 + d_1×2^1 + d_2×2^2 + \cdots $

### Example

Find the decimal value of $111001_2$:

|binary number: |1    | 1   |1    |0    |0    |1    |
|---------------|-----|-----|-----|-----|-----|-----|
|power of 2:    |$2^5$|$2^4$|$2^3$|$2^2$|$2^1$|$2^0$|

$111001_2 = 1 \cdot 2^5+1 \cdot 2^4+1 \cdot 2^3+0 \cdot 2^2+0 \cdot 2^1+1 \cdot 2^0 = 57_{10}$


## [Decimal to Binary](https://www.rapidtables.com/convert/number/decimal-to-binary.html)

Implement:

```c++
long decimal_2_binary(int decimal);
```

### Algorithm

1. Divide the number by 2.
1. Get the integer quotient for the next iteration.
1. Get the remainder for the binary digit.
1. Repeat the steps until the quotient is equal to 0.

### Example

Convert $13_{10}$ to binary:

|Division by 2 |Quotient|Remainder|Bit #|
|--------------|--------|---------|-----|
|13/2          |6       |1        |0    |
|6/2           |3       |0        |1    |
|3/2           |1       |1        |2    |
|1/2           |0       |1        |3    |

So $13_{10} = 1101_2$


## Display binary 

Display binary every four digits with space with leading 0s. For example: binary: 111111111 display as `0001 1111 1111`
