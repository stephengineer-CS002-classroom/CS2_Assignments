/**
 * @author:
 * @project:
 * @purpose:
 * @date:
 */

#include <iostream>

using namespace std;

int main()
{
    // TODO: initialize variable

    char ans;
    do {
        // TODO: add code

        cout << "again? ";
        cin >> ans;
    } while (ans == 'y');

    return 0;
}


/*
Output:

min: 3
max: 28
etc: 5

#1: Count up from 3 to 28
3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 

#2: Count down from 28 to 3
28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 

#3: Even numbers between 3 and 28
4 6 8 10 12 14 16 18 20 22 24 26 28 

#4: Odd numbers between 3 and 28
3 5 7 9 11 13 15 17 19 21 23 25 27 

#5: Skip every two numbers from 3 to 28
3 4 X 6 7 X 9 10 X 12 13 X 15 16 X 18 19 X 21 22 X 24 25 X 27 28 

#6: Multiples of 4 between 3 and 28
4 8 12 16 20 24 28 

#7: Count up from 3 to 28, skipping multiples of 7
3 4 5 6 X 8 9 10 11 12 13 X 15 16 17 18 19 20 X 22 23 24 25 26 27 X 

#8: Count up from 3 to 28, skipping multiples of 5
3 4 X 6 7 8 9 X 11 12 13 14 X 16 17 18 19 X 21 22 23 24 X 26 27 28 

#9: Add up from 3 to 28
3+4+5+6+7+8+9+10+11+12+13+14+15+16+17+18+19+20+21+22+23+24+25+26+27+28=403

#10: List and add up all numbers between 3 and 28
                   3         3
         4                   4
                   5         5
         6                   6
                   7         7
         8                   8
                   9         9
        10                  10
                  11        11
        12                  12
                  13        13
        14                  14
                  15        15
        16                  16
                  17        17
        18                  18
                  19        19
        20                  20
                  21        21
        22                  22
                  23        23
        24                  24
                  25        25
        26                  26
                  27        27
        28                  28
------------------------------
       208       195       403

#11: List and add up all numbers between 3 and 28, skipping multiples of 5
                   3         3
         4                   4
                   X         X
         6                   6
                   7         7
         8                   8
                   9         9
         X                   X
                  11        11
        12                  12
                  13        13
        14                  14
                   X         X
        16                  16
                  17        17
        18                  18
                  19        19
         X                   X
                  21        21
        22                  22
                  23        23
        24                  24
                   X         X
        26                  26
                  27        27
        28                  28
------------------------------
       178       150       328

#12: First column:  3 to 28
     Second column: odd numbers between 3 to 28
         3         3         6
         4         5         9
         5         7        12
         6         9        15
         7        11        18
         8        13        21
         9        15        24
        10        17        27
        11        19        30
        12        21        33
        13        23        36
        14        25        39
        15        27        42
        16                  16
        17                  17
        18                  18
        19                  19
        20                  20
        21                  21
        22                  22
        23                  23
        24                  24
        25                  25
        26                  26
        27                  27
        28                  28
------------------------------
       403       195       598

#13: First column:  3 to 28
     Second column: multiples of 3 between 3 to 28
         3         3         6
         4         6        10
         5         9        14
         6        12        18
         7        15        22
         8        18        26
         9        21        30
        10        24        34
        11        27        38
        12                  12
        13                  13
        14                  14
        15                  15
        16                  16
        17                  17
        18                  18
        19                  19
        20                  20
        21                  21
        22                  22
        23                  23
        24                  24
        25                  25
        26                  26
        27                  27
        28                  28
------------------------------
       403       135       538

#14: First column:  multiples of 4 between 3 to 28
     Second column: multiples of 3 between 3 to 28
         4         3         7
         8         6        14
        12         9        21
        16        12        28
        20        15        35
        24        18        42
        28        21        49
                  24        24
                  27        27
------------------------------
       112       135       247

#15: Factorial of 3
1 * 2 * 3 = 6
again? n
*/
