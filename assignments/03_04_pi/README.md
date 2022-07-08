# 03_04_pi

- Accept [03_04_pi](https://classroom.github.com/a/yPY0YqXC)
- Get [main.cpp](main.cpp)

## Description

Calculate $\pi$ = $4 * (\frac{1}{1} - \frac{1}{3} + \frac{1}{5} - \frac{1}{7} + \frac{1}{9} - \cdots)$

- Do NOT use the `cmath` library EXCEPT to verify the result of your calculations
    - verify the accuracy of your calculations by printing (and comparing) the constant `M_PI` is defined (for most compilers) in cmath, `cout << "M_PI: " << M_PI << endl;`
- Do NOT use `pow()` function
- Use the values of the numerator and denominator of the previous term to calculate the numerator and denominator of the current term.
- Ask the user to input the number of iterations.
    - user will be asked to examine a different value for iterations.


Your program must have a boolean flag named debug that can turn on and off the printing of the terms onto the screen. And, a variable named iteration that will determine the number of iterations of your loop: 

```c++
bool debug = true;
int iterations = 10;
```

If the number of iterations is less than ten, the debug flag turns on and it will cause all the terms to be printed. Turn debug off for iterations over 10.

Set your precision to 5 significant digits for result.
