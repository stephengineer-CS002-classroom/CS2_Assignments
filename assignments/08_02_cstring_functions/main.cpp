/**
 * @author:
 * @project:
 * @purpose:
 * @date:
 */

#include <iostream>
#include <stdio.h>      /* printf */
#include <assert.h>     /* assert */

//------------------------------------------------------------------------------
//Files we are testing:
#include "includes/myCstrings/myCstrings.h"



//------------------------------------------------------------------------------

using namespace std;

int main()
{
    // Initialization
    char source[] = "My cstring function library.";
    char destination[100];
    char myString[] = "abcd54321defg";
    char digits[] = "0123456789";
    int num = 5; // Maximum number of characters
    int num_overflow = 500; // overflow number of characters
    int testResult = 0; // assign function return value to this variable

    cout << "Welcome to myCstrings functions\n";
    cout << "===============================\n";

    // Test StrLen
    cout << "\nTesting StrLen...\n";
    int len_source = StrLen(source);
    int len_destination = 0;
    int len_myString= StrLen(myString);
    int len_digits = StrLen(digits);
    printf("Length of \"%s\" is %i \n", source, len_source); // 28
    printf("Length of \"%s\" is %i \n", myString, len_myString); // 13
    printf("Length of \"%s\" is %i \n", digits, len_digits); // 10
    assert(len_source==28);
    assert(len_myString==13);
    assert(len_digits==10);

    // Test StrCpy
    cout << "\nTesting StrCpy...\n";
    cout << "Before copy string\n";
    printf("Source: %s \n", source); // My cstring function library.
    printf("Destination: %s \n", destination); //
    StrCpy(destination, source);
    printf("After copy string:\n");
    printf("Source: %s \n", source); // My cstring function library.
    printf("Destination: %s \n", destination); // My cstring function library.
    assert(StrLen(destination)==StrLen(source));
    destination[0] = '\0'; // empty destination cstring

    // Test StrNCpy
    cout << "\nTesting StrNCpy...\n";
    cout << "Before copy string\n";
    printf("Source: %s \n", source); // My cstring function library.
    printf("Destination: %s \n", destination); //
    StrNCpy(destination, source, num);
    printf("After copy %i characters:\n", num);
    printf("Destination is: %s \n", destination); // My cs
    assert(StrLen(destination)==num);
    StrNCpy(destination, source, num_overflow);
    printf("After coping %i characters:\n", num_overflow);
    printf("Destination: %s \n", destination); // My cstring function library.
    assert(StrLen(destination)==len_source);

    // Test StrCat
    cout << "\nTesting StrCat...\n";
    cout << "Before concatenate strings\n";
    printf("Source: %s \n", source); // My cstring function library.
    printf("Destination: %s \n", destination); // My cstring function library.
    len_destination = StrLen(destination);
    StrCat(destination, source);
    printf("After concatenate strings:\n");
    printf("Destination: %s \n", destination); // My cstring function library.My cstring function library.
    assert(StrLen(destination)==len_destination+len_source);
    destination[len_source] = '\0'; // reset destination cstring

    // Test StrNCat
    cout << "\nTesting StrNCat...\n";
    cout << "Before concatenate strings\n";
    printf("Source: %s \n", source); // My cstring function library.
    printf("Destination: %s \n", destination); // My cstring function library.
    len_destination = StrLen(destination);
    StrNCat(destination, source, num);
    printf("After concatenate %i characters:\n", num);
    printf("Destination: %s \n", destination); // My cstring function library.My cs
    assert(StrLen(destination)==len_destination+num);
    len_destination = StrLen(destination);
    StrNCat(destination, source, num_overflow);
    printf("After concatenate %i characters:\n", num_overflow);
    printf("Destination: %s \n", destination); // My cstring function library.My csMy cstring function library.
    assert(StrLen(destination)==len_destination+len_source);
    destination[len_source] = '\0'; // reset destination cstring

    // Test StrCmp
    cout << "\nTesting StrCmp...\n";
    printf("String 1: %s \n", source); // My cstring function library.
    printf("String 2: %s \n", source); // My cstring function library.
    testResult = StrCmp(source, source);
    printf("Compare two strings result is: %i\n", testResult);
    assert(testResult==0);
    printf("String 1: %s \n", myString); // abcd54321defg
    printf("String 2: %s \n", source); // My cstring function library.
    testResult = StrCmp(myString, source);
    printf("Compare two strings result is: %i\n", testResult);
    assert(testResult==1);
    printf("String 1: %s \n", source); // My cstring function library.
    printf("String 2: %s \n", myString); // abcd54321defg
    testResult = StrCmp(source, myString);
    printf("Compare two strings result is: %i\n", testResult);
    assert(testResult==-1);

    // Test StrChr
    cout << "\nTesting StrChr...\n";
    printf("My string: %s \n", myString); // abcd54321defg
    testResult = StrChr(myString, 'd', 0);
    printf("Find the first position of target d: %i\n", testResult); // 3
    assert(testResult==3);

    // Test StrRChr
    cout << "\nTesting StrRChr...\n";
    printf("My string is: %s \n", myString); // abcd54321defg
    testResult = StrRChr(myString, 'd', 0);
    printf("Find the last position of target d: %i\n", testResult); // 9
    assert(testResult==9);

    // Test StrStr
    char subString[100] = "54321";
    cout << "\nTesting StrStr...\n";
    printf("My string: %s \n", myString); // abcd54321defg
    printf("Sub string: %s \n", subString); // 54321
    testResult = StrStr(myString, subString);
    printf("First char position of substring in my string: %i\n", testResult); // 4
    assert(testResult==4);
    printf("Sub string is: %s \n", digits); // 0123456789
    testResult = StrStr(myString, digits);
    printf("First char position of substring in my string: %i\n", testResult); // -1
    assert(testResult==-1);

    // Test SubStr
    subString[0] = '\0'; // reset subString
    cout << "\nTesting SubStr...\n";
    printf("My string: %s \n", myString); // abcd54321defg
    SubStr(myString, subString, 0, 9);
    printf("Create length is 9 subString: %s\n", subString); // abcd54321
    assert(StrLen(subString)==9);
    subString[0] = '\0'; // reset subString
    SubStr(myString, subString, 6, 500);
    printf("Create length is 500 subString starting at position 6 of my string: %s\n", subString); // 321defg
    assert(StrLen(subString)==7);


    // Test FindAny and FindNotAny and Show
    cout << "\nTesting FindAny and FindNotAny...\n";
    printf("My string is: %s \n", myString); // abcd54321defg
    printf("Digits is: %s \n", digits); // 0123456789
    int start = FindFirstOf(myString, digits, 0);
    int end = FindFirstNotOf(myString, digits, start);
    printf("Digits starts at: %i\n",  start); // 4
    printf("Digits ends at: %i\n", end-1); // 9
    assert(start==4);
    assert(end==9);
    cout << "\nShow array...\n";
    Show(myString, start);
    Show(myString, end-1);

    // Test ToInt
    cout << "\nTesting ToInt...\n";
    printf("My string is: %s \n", myString); // abcd54321defg
    testResult = ToInt(myString, 0);
    printf("First integer in my string: %i\n", testResult); // 5
    assert(testResult==5);

    // Test AtoI
    cout << "\nTesting AtoI...\n";
    char number[] = "1357";
    printf("My number string is: %s \n", number); // 1357
    testResult = AtoI(number);
    printf("Converts my string to integer: %i\n", testResult);

    // Test CharToInt
    cout << "\nTesting CharToInt...\n";
    testResult = CharToInt('a');
    printf("Converts \"a\" to integer: %i\n", testResult); // 97
    assert(testResult==10);

    // Test ToUpper and ToLower
    cout << "\nTesting ToUpper and ToLower...\n";
    printf("Source is: %s \n", source); // My cstring function library.
    ToUpper(source);
    printf("Source in uppercase: %s \n", source); // MY CSTRING FUNCTION LIBRARY.
    assert(StrLen(source)==len_source);
    ToLower(source);
    printf("Source in lowercase: %s \n", source); // my cstring function library.
    assert(StrLen(source)==len_source);

    cout << "\n\nYou PASS ALL!\n\n";
    cout << endl;
}


/*
Welcome to myCstrings functions
===============================

Testing StrLen...
Length of "My cstring function library." is 28 
Length of "abcd54321defg" is 13 
Length of "0123456789" is 10 

Testing StrCpy...
Before copy string
Source: My cstring function library. 
Destination:  
After copy string:
Source: My cstring function library. 
Destination: My cstring function library. 

Testing StrNCpy...
Before copy string
Source: My cstring function library. 
Destination:  
After copy 5 characters:
Destination is: My cs 
After coping 500 characters:
Destination: My cstring function library. 

Testing StrCat...
Before concatenate strings
Source: My cstring function library. 
Destination: My cstring function library. 
After concatenate strings:
Destination: My cstring function library.My cstring function library. 

Testing StrNCat...
Before concatenate strings
Source: My cstring function library. 
Destination: My cstring function library. 
After concatenate 5 characters:
Destination: My cstring function library.My cs 
After concatenate 500 characters:
Destination: My cstring function library.My csMy cstring function library. 

Testing StrCmp...
String 1: My cstring function library. 
String 2: My cstring function library. 
Compare two strings result is: 0
String 1: abcd54321defg 
String 2: My cstring function library. 
Compare two strings result is: 1
String 1: My cstring function library. 
String 2: abcd54321defg 
Compare two strings result is: -1

Testing StrChr...
My string: abcd54321defg 
Find the first position of target d: 3

Testing StrRChr...
My string is: abcd54321defg 
Find the last position of target d: 9

Testing StrStr...
My string: abcd54321defg 
Sub string: 54321 
First char position of substring in my string: 4
Sub string is: 0123456789 
First char position of substring in my string: -1

Testing SubStr...
My string: abcd54321defg 
Create length is 9 subString: abcd54321
Create length is 500 subString starting at position 6 of my string: 321defg

Testing FindAny and FindNotAny...
My string is: abcd54321defg 
Digits is: 0123456789 
Digits starts at: 4
Digits ends at: 8

Show array...
abcd54321defg
....^

abcd54321defg
........^


Testing ToInt...
My string is: abcd54321defg 
First integer in my string: 5

Testing AtoI...
My number string is: 1357 
Converts my string to integer: 1357

Testing CharToInt...
Converts "a" to integer: 10

Testing ToUpper and ToLower...
Source is: My cstring function library. 
Source in uppercase: MY CSTRING FUNCTION LIBRARY. 
Source in lowercase: my cstring function library. 


You PASS ALL!


*/