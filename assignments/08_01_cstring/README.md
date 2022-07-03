# 08_01_cstring

- Accept [08_01_cstring](https://classroom.github.com/a/E5XJrRn6)
- Get [main.cpp](main.cpp)
- Get [myCstrings.h](myCstrings.h)

## Functions

Create `myCstrings.h` header file to implement the following functions. Each of these functions should have a single parameter -- accepting a c-style string as an argument. The function should only do what is specified (note that none of these functions do any output to the screen). Your functions should use const in the prototype wherever it is appropriate:

1. Write a function that counts and returns the number of vowels in the string. (For the purposes of this exercise, we are talking about the standard 5 vowels -- A, E, I, O, U).
2. Write a function that counts and returns the number of consonants in the string.
3. Write a function that converts the string to all lowercase.
4. Write a function that converts the string to all uppercase.

**NOTE:  You should NOT use the string and cstring functions, which means do NOT #include <string> or #include <cstrings> libraries.**


## Menu

Write a main program that performs the following steps:

1. Prompt the user to enter a string, and let them type it in. This could be an entire sentence, with the newline indicating the end of the string. You may assume the string will be no more than 100 characters, so declare your array accordingly.  (Note:  the functions should still work for arrays larger than 100 characters).

3. Display the following menu:
    A)  Count the number of vowels in the string
    B)  Count the number of consonants in the string
    C)  Convert the string to uppercase
    D)  Convert the string to lowercase
    E)  Display the current string
    F)  Enter another string
    M)  Display this menu
    X)  Exit the program

4. Enter a loop, allowing the user to type in a menu choice each time. The loop should continue until the user enters the command to exit. Upper and lowercase letters should be allowed for the menu choices.
    - When the A or B commands are entered (counting vowels or consonants), call the corresponding function, then print the result
    - When the C or D commands are chosen, just call the appropriate function to convert the string. Do not do any output from the main on these commands.
    - When E is chosen, print the contents of the stored string.
    - When F is chosen, allow a new string to be typed -- this will replace the previous one.
    - The menu should only be displayed once at the start, and then again whenever the M option is selected
