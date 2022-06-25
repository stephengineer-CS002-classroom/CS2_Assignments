/**
 * @author:
 * @project:
 * @purpose:
 * @date:
 */

#include <iostream>

//------------------------------------------------------------------------------
//Files we are testing:
#include "includes/sum_primes/sum_primes.h"



//------------------------------------------------------------------------------

using namespace std;

void basic_test(bool debug=false);
void testB(bool debug=false);

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
    int number, sum;

    // Test 1
    number = 124566;
    sum = SumDigits(number);
    cout << "The sum of the digits of " << number << " is " << sum;

    // Test 2
    number = 23453245;
    sum = SumDigits(number);
    cout << "The sum of the digits of " << number << " is " << sum;

    cout << endl << endl;
    bool prime;

    // Test 1
    number = 230;
    prime = isPrime(number);
    cout << number << " is prime: " << boolalpha << prime << endl;

    // Test 2
    number = 233;
    prime = isPrime(number);
    cout << number << " is prime: " << boolalpha << prime << endl;
}

void testB(bool debug)
{
    // TODO: add more test here
}


/*


---------running basic_test---------

The sum of the digits of 124566 is 24The sum of the digits of 23453245 is 28

230 is prime: false
233 is prime: true


------------- D O N E --------------



-----------running testB------------

Which exercise? 1
Exercise 1:
Please enter an integer (0 to quit): 124566
The sum of the digits of 124566 is 24
Please enter an integer (0 to quit): 23453245
The sum of the digits of 23453245 is 28
Please enter an integer (0 to quit): 45454545
The sum of the digits of 45454545 is 36
Please enter an integer (0 to quit): -9189845
The sum of the digits of -9189845 is 44
Please enter an integer (0 to quit): 0
Goodbye
again? y
Which exercise? 2
Exercise 2:
Please input two positive numbers: 230 700
The prime numbers between 230 and 700 are: 
233     239     241     251     257     263     269     271
277     281     283     293     307     311     313     317
331     337     347     349     353     359     367     373
379     383     389     397     401     409     419     421
431     433     439     443     449     457     461     463
467     479     487     491     499     503     509     521
523     541     547     557     563     569     571     577
587     593     599     601     607     613     617     619
631     641     643     647     653     659     661     673
677     683     691
again? n


------------- D O N E --------------

*/