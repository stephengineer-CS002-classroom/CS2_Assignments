# 03_03_e_x

- Accept [03_03_e_x](https://classroom.github.com/a/_UtzzqqV)
- Get [main.cpp](main.cpp)

## Description

Calculate $e^x = \frac{1}{1} + \frac{x}{1 \times 1} + \frac{x \times x}{1 \times 1 \times 2} + \frac{x \times x \times x}{1 \times1 \times2 \times3} + \cdots$

- Do NOT use the `cmath` library EXCEPT to verify the result of your calculations, `result = exp(x);`
- Do NOT use `pow()` function
- Use the values of the numerator and denominator of the previous term to calculate the numerator and denominator of the current term.
- Ask the user to input the value of x. Then ask the user to input the number of iterations.
    - user will be asked to examine a different value for iterations, but not x.


Your program must have a boolean flag named debug that can turn on and off the printing of the terms onto the screen. And, a variable named iteration that will determine the number of iterations of your loop: 

```c++
bool debug = true;
int iterations = 10;
int x = 20;
```

If the number of iterations is less than ten, the debug flag turns on and it will cause all the terms to be printed. Turn debug off for iterations over 10.

Set your precision to 5 significant digits for result and precision to 6 for items.
