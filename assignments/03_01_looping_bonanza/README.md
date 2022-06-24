# 03_01_looping_bonanza

- Accept [03_01_looping_bonanza](https://classroom.github.com/a/ep9RQVXl)
- Get [main.cpp](main.cpp)

## Description

This is the project that I hope will make you very comfortable with loops. It consists of 15 drills. Some are more challenging than others, but they are all related. Solving one will help you solve the next (or the previous).

## Exercises

1. Ask the user to enter two numbers
1. Figure out which is the larger number, store this in Max, and which is the smaller number, store this in Min
1. Ask the user to enter the third number, store this in the variable named etc.

Using these three numbers, perform the following operations: all ranges are inclusive (include both min and max). For example: min=3, max=28, etc=5

1. Count up from min to max
```
#1: Count up from 3 to 28
3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28
```

2. Count down from max to min
```
#2: Count down from 3 to 28
28 27 26 25 24 23 22 21 20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 
```

3. Show all even numbers between min and max
```
#3: Even numbers between 3 and 28
4 6 8 10 12 14 16 18 20 22 24 26 28 
```

4. Show all odd numbers between min and max
```
#4: Odd numbers between 3 and 28
3 5 7 9 11 13 15 17 19 21 23 25 27 
```

5. Count up from min to max, skip every two numbers: 
```
#5: Skip every two numbers from 3 to 28 
3 4 X 6 7 X 9 10 X 12 13 X 15 16 X 18 19 X 21 22 X 24 25 X 27 28 
```

6. Count up with multiples of four
```
#6: Multiples of 4 between 3 and 28
4 8 12 16 20 24 28 
```

7. Count up from min to max, skipping multiples of seven
```
#7: Count up from 3 to 28, skipping multiples of 7
3 4 5 6 X 8 9 10 11 12 13 X 15 16 17 18 19 20 X 22 23 24 25 26 27 X 
```

8. Count up from min to max, skipping multiples of etc.
```
#8: Count up from 3 to 28, skipping multiples of 5
3 4 X 6 7 8 9 X 11 12 13 14 X 16 17 18 19 X 21 22 23 24 X 26 27 28
```

9. Add up all the numbers from min to max and show the total
```
#9: Add up from 3 to 28
3+4+5+6+7+8+9+10+11+12+13+14+15+16+17+18+19+20+21+22+23+24+25+26+27+28=403
```

10. Add up all the numbers from min to max and show the total odd numbers, total even numbers, and the grand total in a single loop. Note the alignment (`setw(10)`)of the columns and how the totals are verified programmatically.
```
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
```

11. Add up all the numbers from min to max, skipping multiples of etc,  and show the total odd numbers, total even numbers, and the grand total, average odd, average even, and the average of all the numbers.
```
#11: List and add up all numbers between between 3 and 28, skipping multiples of 5
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
```

### Two columns of numbers

For the next few drills, you have two columns of sequence. For example, the first column is all numbers between min and max, the second column is odd numbers between min and max.


12. For each number in the first column, add it to the corresponding number in the second column. Show the resulting sequence.

```
#12: First column:  3 to 28
     Second column: odd numbers between 3 to 28
     Add up each pair.
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
       403      195        598  
```

13. Place multiples of three, starting from min in the second column, the first column remains the same, and again, add them up and display the results.

```
#13: First column:  3 to 28
     Second column: multiples of 3 between 3 to 28
     Add up each pair.
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
```


14. Place the multiples of four in the first column starting from min (to max) and add them to the second column still containing multiples of three. Show the resulting sequence.

```
#14: First column:  multiples of 4 between 3 to 28
     Second column: multiples of 3 between 3 to 28
     Add up each pair.
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
```


15. show the factorial of min. 

```
#15: Factorial of 3
1 * 2 * 3 = 6
```

