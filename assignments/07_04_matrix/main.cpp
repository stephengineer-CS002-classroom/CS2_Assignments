/**
 * @author:
 * @project:
 * @purpose:
 * @date:
 */

#include <iostream>
#include <iomanip>

//------------------------------------------------------------------------------
//Files we are testing:
#include "includes/matrix/matrix.h"



//------------------------------------------------------------------------------

using namespace std;

void basic_test(bool debug=false);
void testB(bool debug=false);

void input_matrix(int a[][N], const int rows);
//input matrix
void print_matrix(int a[][N], const int rows);
//print matrix, setw(4) for each item


int main()
{
    // BASIC TEST
    cout << "\n\n---------running basic_test---------\n\n";
    basic_test();
    cout << "\n\n------------- D O N E --------------\n\n";

    // TEST B
    cout << "\n\n-----------running testB------------\n\n";
    testB();
    cout << "\n\n------------- D O N E --------------\n\n";

    return 0;
}


void basic_test(bool debug)
{
    //1.add operation
    //dec
    int matrix_a[M][N], matrix_b[M][N], sum[M][N];
    //input
    cout << "Enter Matrix A (size 2*3): ";
    input_matrix(matrix_a, M);
    cout << "Enter Matrix B (size 3*3): ";
    input_matrix(matrix_b, M);
    //processing
    matrixAdd(matrix_a, matrix_b, sum);
    //output result
    cout << "Result: " << endl;
    print_matrix(sum, M);
    //2. multi operation
    //dec
    int matrix_c[Q][R], matrix_d[R][S], product[Q][S];
    //input
    cout << "Enter Matrix A (size 2*3): ";
    input_matrix(matrix_c, Q);
    cout << "Enter Matrix B (size 3*3): ";
    input_matrix(matrix_d, R);
    //processing
    matrixMult(matrix_c, matrix_d, product);
    //output
    cout << "Result: " << endl;
    print_matrix(product, Q);
}

void testB(bool debug)
{
    // TODO: add more test here
}

/*


---------running basic_test---------

Enter Matrix A (size 2*3): 2 5 1 0 3 -1
Enter Matrix B (size 3*3): 1 0 2 -1 4 -2
Result: 
   3   5   3
  -1   7  -3
Enter Matrix A (size 2*3): 2 5 1 0 3 -1
Enter Matrix B (size 3*3): 1 0 2 -1 4 -2 5 2 1
Result: 
   2  22  -5
  -8  10  -7


------------- D O N E --------------



-----------running testB------------



------------- D O N E --------------

*/