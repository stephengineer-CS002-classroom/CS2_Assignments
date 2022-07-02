# 08_02_cstring_functions

- Accept [08_02_cstring_functions](https://classroom.github.com/a/Grg51CzS)
- Get [main.cpp](main.cpp)
- Get [myCstrings.h](myCstrings.h)


## Functions

**cstrings**: are null-terminated character arrays. C++ offers many built-in functions that perform copying, comparing, searching, and concatenation operations on cstrings.

In this project, you will reconstruct some of the most useful cstring and standard string object functions. You will not be creating a class for this project, only functions.

An application or a class may use these functions to perform a variety of operations on cstrings.
Things to watch out for

- Name your header file `myCstrings.h`
- DO NOT name your header file `cstring.h`
- DO NOT name your project `cstring` or `string`
- Do NOT include <cstring> or <string> in your program
- Do NOT use any of the cstring functions (strcpy, strcat, etc.) in this project.
- Do NOT use MAX anywhere in your functions. We do not do range checking here. Caller is responsible for checking the range.
- Be careful with for `(int i=0; i<StrLen(s); i++)` this will call StrLen() in EVERY SINGLE iteration of the loop! ( :--// 
- REUSE CODE: Many of these functions aid in the design of other functions. Do not rewrite the same code over and over. Write a useful function and call it from other functions.


## Requirements

- Every function will have as the comment block the preconditions and postconditions listed.
- Precondition: destination array will have enough space to contain the source.
- If the caller violates your preconditions, cout error. 
- Do not address MAX in your functions. The user is responsible for bounds checking. 


## Description

Lower-level functions to mirror some of the c++ cstring (and string) functions

## Reference

https://en.cppreference.com/w/cpp/header/cstring

