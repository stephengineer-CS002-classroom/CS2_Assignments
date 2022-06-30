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
#include "includes/twod/twod.h"



//------------------------------------------------------------------------------

using namespace std;

//print matrix with cursor position, size and cursor
void display_matrix(int a[][CAPACITY], int sizes[], int row, int col);
//print menu on screen
void display_2d_menu();

int main()
{
    // declaration
    srand(500);                       // set seed
    // int sizes[ROW_SIZES] = {0};    // number used for each row
    // Github test use
    int sizes[ROW_SIZES] = {10, 1, 9, 10, 5, 9, 1, 4, 0, 9, 3, 1};
    bool running = true;
    int array2d[ROW_SIZES][CAPACITY]; // 2D array
    int row = 0;                      // cursor of row
    int col = 0;                      // cursor of column
    int item;                         // the number will be operated
    char command;                     // user's input command

    // TODO: initialize variable

    display_2d_menu();
    init(array2d, sizes, row, col);

    // TODO: set cursor to last row

    // TODO: set cursor to last column

    while(running)
    {
        display_matrix(array2d, sizes, row, col);
        cout << endl;
        cout << ">> ";
        cin >> command;
        switch (command) 
        {

        // TODO

        default:
            cout << "{ Wrong Operation Command! }\n";
            break;
        }
    };
    cout << "\nExit 2D Array Navigation\n\n";
    cout << "--------------------------\n\n";
    return 0;
}


//print matrix with cursor position, size and cursor
void display_matrix(int a[][CAPACITY], int sizes[], int row, int col)
{
  using namespace std;
  cout << "Cursor: (" << setw(2) << row << "," << setw(2) << col << "), NumUsed: " << setw(2) << sizes[row] << endl;
  for (int i=0; i<ROW_SIZES; i++) {
    if(i==row && col==-1){
      cout << "[:]";
    } else {
      cout << " : ";
    }
    for (int j=0; j<sizes[i]; j++) {
      if(i==row && j==col) {
        cout << "[" <<  setw(2) << a[i][j] << "] ";
      } else {
        cout << setw(3) << a[i][j] << "  ";
      }
    }
    cout << endl;
  }
}

//print menu on screen
void display_2d_menu()
{
  using namespace std;
  cout << "---------------------------------------------------------------------" << endl;
  cout << "[A]ppend [B]efore a[F]ter [R]andom [D]elete [S]earch" << endl;
  cout << "re[V]erse [U]nique [<]Descending [>]Ascending" << endl;
  cout << ".   .   .   .   .   .   .   .   .   .   .   .   .   .   .   .   ." << endl;
  cout << "[4/G]left [6/J]right [8/Y]up [2/N]down [7/H]ome [1/E]nd [M]ove_cursor" << endl;
  cout << "[?]menu e[X]it" << endl;
  cout << "---------------------------------------------------------------------" << endl << endl;
}
