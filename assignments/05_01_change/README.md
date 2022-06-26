# 05_01_change

- Accept [05_01_change](https://classroom.github.com/a/BtKiGqlX)
- Get [main.cpp](main.cpp)
- Get [change.h](change.h)


## Function

- Declare following functions in `includes/change/change.h`
- Implement following functions in `includes/change/change.cpp`

```c++
//calculate the number of coins of current coinValue can get from cents
void Change(int &numOfCoins, int &cents, int coinValue);
//get input cents from user
void Input(int &cents);
//display result
void Output(int quarter, int dime, int nickel, int penny);
```

For example, call `change(num_of_quarters, cents, QUARTER);`. We will get the maximum number of quarters we can get from total cents, and cents will deducted the cents of these quarters for next calculation. `QUARTER` is a const number, which equals to 25.
