# 07_04_matrix

- Accept [07_04_matrix](https://classroom.github.com/a/rd1ZdeYi)
- Get [main.cpp](main.cpp)
- Get [matrix.h](matrix.h)

## Description

Implement following functions in `matrix.h` to calculate matrix addition and multiplication.

## Matrix Addition

The addition of two matrices is performed by adding elements in corresponding positions in the matrices. Therefore, matrices that are added must be of the same size; the result is another matrix of the same size.

Example of matrix addition:

$$
\begin{bmatrix}
2 & 5 & 1\\
0 & 3 & -1
\end{bmatrix}
+
\begin{bmatrix}
1 & 0 & 2\\
-1 & 4 & -2
\end{bmatrix}
=\begin{bmatrix}
3 & 5 & 3\\
-1 & 7 & -3
\end{bmatrix}
$$


## Matrix Multiplication

Matrix multiplication is not computed by multiplying corresponding elements of the two matrices. 

The value in position $c_{i,j}$ of the product C of two matrices A and B is the product of row i of the first matrix and column j of the second matrix:

$$c_{i, j} = \sum_{k=1}^{n} a_{i,k}b_{k,j}$$

The product of row i and column j requires that the row i and the column j have the same 
number of elements. Therefore, the first matrix (A) must have the same number of elements in 
each row as there are in the columns of the second matrix (B). Thus, if A and B both have five 
rows and five columns, their product has five rows and five columns. Furthermore, for these 
matrices, we can compute both AB and BA, but in general, they will not be equal.

- Another (non-square) example: if A has two rows and three columns and B has three 
rows and three columns, the product AB will have two rows and three columns.

Given:

$$
A=
\begin{bmatrix}
2 & 5 & 1\\
0 & 3 & -1
\end{bmatrix}
, B=
\begin{bmatrix}
1 & 0 & 2\\
-1 & 4 & -2\\
5 & 2 & 1
\end{bmatrix}
$$

The first element in the product C = AB is

$$
\begin{aligned}
c_{1,1} &= \sum_{k=1}^{3} a_{1,k}b_{k,1} \\
&= a_{1,1}b_{1,1,}+a_{1,2}b_{2,1,}+a_{1,3}b_{3,1}\\
&= 2(1)+5(-1)+1(5)\\
&= 2
\end{aligned}
$$

Note: $c_{1,1}$ will actually be stored in `product[0][0]`.

Similarly, we can compute the rest of the elements in the product of A and B:

$$
AB=C=
\begin{bmatrix}
2 & 22 & -5\\
-8 & 10 & -7
\end{bmatrix}
$$

**Note**: Neither function should output anything.  Any outputs should be in main.