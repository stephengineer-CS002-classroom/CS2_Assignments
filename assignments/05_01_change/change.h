#ifndef CHANGE_H
#define CHANGE_H

#include <iostream>

// Declaration

//calculate the number of coins of current coinValue can get from cents
void Change(int &numOfCoins, int &cents, int coinValue);
//get input cents from user
void Input(int &cents);
//display result
void Output(int quarter, int dime, int nickel, int penny);

#endif // CHANGE_H