# 02_06_cash_register

- Accept [02_06_cash_register](https://classroom.github.com/a/FoyrCl22)
- Get [main.cpp](main.cpp)


## Description

Your goal is to simulate a cash register. Your program should first ask for the purchase amount and then the amount paid by the customer. Then the program should calculate the total change and the quantities of each monetary denomination to arrive at that change amount.  Finally, the program should output the total change followed by how many of each type of currency to give back to the customer.

### Algorithm outline

Calculate the change in dollars, then convert it to pennies, assigning this number into a new variable. Then use integer division to calculate the number of each coin denomination, and use the modulo operator to update the remaining number of pennies each time.

This requires that we convert from floating point data (change in dollars) to integer data (change in pennies), a process called casting: specifically, we use an operator called a static cast as follows:

```c++
int_variable = static_cast<int>(fp_variable);
```

We have to be careful about this: it doesn’t always give us the result we expect!

Since it truncates (rather than rounding), a number such as 46.999999 (which, even as a double, displays as 47) will become 46 as an int (go ahead and try it!)

To get around this, all we have to do is add 0.5 before casting: this will force the fp number to be rounded to the nearest int:

```c++
x = static_cast<int>( y * 100 + 0.5 );
```

Convince yourself that this does indeed work for any decimal fraction.

For this exercise:
- what are good variable names for x and y?
- what data types are they, respectively?
