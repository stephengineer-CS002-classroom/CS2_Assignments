/**
 * @author:
 * @project:
 * @purpose:
 * @date:
 */

#include <iostream>

using namespace std;

int main()
{
    // TODO: initialize variable

    char ans;
    do {
        // TODO: add code

        // format of printing out result to match with test
        /*
        cout << setiosflags(ios::fixed) << setprecision(2) <<
            setiosflags(ios::right);
        cout << "gross: " << setw(17) << "$" << salary << endl;
        cout << "deductions:\n\n";
        cout << "  Social Security Tax:"<< setw(12) << "$" << setw(7)
            << social_security << endl;
        cout << "  Federal Income Tax:"<< setw(13) << "$" << setw(7)
            << federal_tax << endl;
        cout << "  State Income Tax:"<< setw(15) << "$" << setw(7)
            << state_tax << endl << endl;
        cout <<  "  union dues:" << setw(21) << "$" << setw(7) << UNION_DUE << endl;
        cout << "  health insurance:" << setw(15) << "$" << setw(7) <<
            HEALTH_INSURANCE << endl;
        cout << "-----------------------------------------\n";
        cout << "  total deductions:" << setw(15) << "$" << setw(7)
            << deduction << endl;
        cout << "net pay:" << setw(18) << "$" << setw(7)  << net_pay << endl;
        */

        cout << "again? ";
        cin >> ans;
    } while (ans == 'y');

    return 0;
}


/*
Output:

Hours worked: 35
Number of dependents: 2
-----------------------------------------
35.00 at $100.00 per hour
gross:                 $3500.00
deductions:

  Social Security Tax:           $ 210.00
  Federal Income Tax:            $ 490.00
  State Income Tax:              $ 175.00

  union dues:                    $  10.00
-----------------------------------------
  total deductions:              $ 885.00
net pay:                 $2615.00
again? y
Hours worked: 55
Number of dependents: 6
-----------------------------------------
55.00 at $100.00 per hour
gross:                 $6250.00
deductions:

  Social Security Tax:           $ 375.00
  Federal Income Tax:            $ 875.00
  State Income Tax:              $ 312.50

  union dues:                    $  10.00
  health insurance:              $  35.00
-----------------------------------------
  total deductions:              $1607.50
net pay:                 $4642.50
again? n
*/
