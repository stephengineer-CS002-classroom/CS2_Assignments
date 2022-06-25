/**
 * @author:
 * @project:
 * @purpose:
 * @date:
 */

#include <iostream>

using namespace std;

//convert binary string to decimal integer
int binary_2_decimal(string bin);
//convert decimal integer to binary integer
long decimal_2_binary(int decimal);
//display binary every four digits with space
void display_binary(long bin);

int main()
{
    //declare variables
    char ans;
    //binary string
    string binary;
    //decimal integer
    int dec;
    // binary integer
    long bin;
    do {
        //prompt
        cout << "bin: ";
        // get binary string
        cin >> binary;

        //get binary and transfer to decimal
        dec = binary_2_decimal(binary);
        //output
        cout << "is " << dec << " in decimal notation" << endl;
        
        //convert binary to decimal
        cout << "which is equal to: ";
        bin = decimal_2_binary(dec);

        //display binary every four digits with space
        display_binary(bin);
        
        //ask again
        cout << "again? ";
        cin >> ans;
    } while (ans == 'y');
    return 0;
}

int binary_2_decimal(string bin)
{
    //declaration
    int decimal = 0;
    // TODO: convert binary to decimal

    return decimal;
}

long decimal_2_binary(int decimal)
{
    //declaration
    long binary=0;
    // TODO: convert decimal to binary

    return binary;
}

void display_binary(long bin)
{
    string s = to_string(bin);
    // TODO: display binary every four digits with space

    cout << endl;
}


/*
Output:

bin: 111
is 7 in decimal notation
which is equal to: 0111 
again? y
bin: 1111
is 15 in decimal notation
which is equal to: 1111 
again? y
bin: 111111
is 63 in decimal notation
which is equal to: 0011 1111 
again? y
bin: 1100110011
is 819 in decimal notation
which is equal to: 0011 0011 0011 
again? n
*/
