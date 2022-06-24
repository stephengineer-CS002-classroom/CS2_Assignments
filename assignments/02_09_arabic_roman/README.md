# 02_09_arabic_roman

- Accept [02_09_arabic_roman](https://classroom.github.com/a/5XnKjKDg)
- Get [main.cpp](main.cpp)

## Description

[2999 = MMCMXCIX](http://romannumerals.babuo.com/converter)

## Algorithm

- Read the number as an integer (the number has to be between 1000 and 3000): e.g. 2786 (this is mandatory)
- Use arithmetics to separate each digit into separate ints: (do you know what the modulus operator is? “%” No? look it up.)
- Declare a string variable named roman. Initialize this variable to and empty string: ""
- Use four switch cases to append the appropriate string to your roman string. 
    - roman += "XX";  //in case of tens being 2
    - roman += "XXX" // in case of tens being 3
    - etc.
- Print the roman string after the four switches.
