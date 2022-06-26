/**
 * @author:
 * @project:
 * @purpose:
 * @date:
 */

#include <iostream>

//------------------------------------------------------------------------------
//Files we are testing:
#include "includes/unit_conversion/unit_conversion.h"



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
    // length units
    int feet = 5;
    double inches = 3;
    int meters;
    double cm;
    // weight units
    int pounds = 10;
    double ounces = 3;
    int kg;
    double grams;
    // volume units
    int liters = 10;
    double ml = 200;
    int gallons;
    double fl_oz;

    FeetInches2MetersCentimeters(feet, inches, meters, cm);
    cout << feet << " feet and " << inches << " inches are " << meters << " meters and "<< cm << " centimeters."<< endl;
    MetersCentimeters2FeetInches(meters, cm, feet, inches);
    cout << meters << " meters and " << cm << " centimeters are " << feet << " feet and "<< inches << " inches."<< endl << endl;
    
    PoundsOunces2KilogramsGrams(pounds, ounces, kg, grams);
    cout << pounds << " pounds and " << ounces << " ounces are " << kg << " kilograms and "<< grams << " grams."<< endl;
    KilogramsGrams2PoundsOunces(kg, grams, pounds, ounces);
    cout << kg << " kilograms and " << grams << " grams are "<< pounds << " pounds and " << ounces << " ounces." << endl << endl;
    
    LitersMilliliters2GallonsOunces(liters, ml, gallons, fl_oz);
    cout << liters << " liters and " << ml << " milliliters are "<< gallons << " gallons and " << fl_oz << " ounces." << endl;
    GallonsOunces2LitersMilliliters(gallons, fl_oz, liters, ml);
    cout <<  gallons << " gallons and " << fl_oz << " ounces are " << liters << " liters and " << ml << " milliliters. "<<endl << endl;
}

void testB(bool debug)
{
    // TODO: add more test here
}


/*


---------running basic_test---------

5 feet and 3 inches are 1 meters and 60.02 centimeters.
1 meters and 60.02 centimeters are 5 feet and 3.00003 inches.

10 pounds and 3 ounces are 4 kilograms and 620.968 grams.
4 kilograms and 620.968 grams are 10 pounds and 3.00004 ounces.

10 liters and 200 milliliters are 2 gallons and 88.9028 ounces.
2 gallons and 88.9028 ounces are 10 liters and 199.983 milliliters. 



------------- D O N E --------------



-----------running testB------------



------------- D O N E --------------

*/