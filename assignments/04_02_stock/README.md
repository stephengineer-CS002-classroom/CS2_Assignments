# 04_02_stock

- Accept [04_02_stock](https://classroom.github.com/a/5RQUC5ne)
- Get [main.cpp](main.cpp)
- Get [stock.h](stock.h)


## Function

Implement following functions in `includes/stock/stock.h`


The `fract_2_double` function convert the stock fraction to a double. It takes three arguments: `whole`, `numerator`, `denominator`, and return single stock price as double.

The `holding_price` function calculate holding price. It takes two arguments: single stock `price` and `number_of_stock`, and return total price as double.


## TestB

1. declare variables:
    - The `whole_number`, `numerator`, `denominator`, and the `number_of_shares` are all integers. 
1. input the price of a single stock and the number of stocks owned. 
1. convert the stock price to double
1. multiply the double price of the stock by the number of stock to get holdings in dollars

### Input

Allow the user to input the price of one stock in a single line: 24 3/8

**Hint**: you are reading an int, followed by another int, followed by a char, followed by an int
