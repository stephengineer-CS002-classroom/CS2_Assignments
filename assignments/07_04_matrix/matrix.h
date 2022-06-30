#ifndef MATRIX_H
#define MATRIX_H

const int M = 2, N = 3, Q = 2, R = 3, S = 3;

//matrix add operation
void matrixAdd(const int a[][N], const int b[][N], int sum[][N]);
//matrix multiply operation
void matrixMult(const int a[][R], const int b[][S], int product[][S]);

// TODO

// Definition

#endif // MATRIX_H