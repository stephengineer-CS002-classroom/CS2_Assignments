#ifndef UNIT_CONVERSION_H
#define UNIT_CONVERSION_H

#include <iostream>

// Declaration

/**
 * @brief Universal Conversion Function to convert any pairs of units of
 *        measurement to any other pairs of units, provided it is passed the
 *        necessary information to do the conversion
 * @param X unit pairs to be converted - left hand big units
 * @param x unit pairs to be converted - left hand small units
 * @param Y result of conversion - right hand big units
 * @param y result of conversion - right hand small units
 * @param xInX conversion factor for the left hand units.
 *             How many small unit in big unit on the left hand side.
 * @param yPERx conversion factor to convert the small unit from the left to the small unit on the right
 * @param yInY conversion factor for the right hand side units.
 *             How many small unit in the big unit on the right hand side
 */
void Convert(int X, double x, int &Y, double &y, int xInX, double yPERx, int yInY);

// Write pairs of functions to convert:
void FeetInches2MetersCentimeters(int feet, double inches, int &meters, double &cm);
void MetersCentimeters2FeetInches(int meters, double cm, int &feet, double &inches);
void PoundsOunces2KilogramsGrams(int pounds, double ounces, int &kilograms, double &grams);
void KilogramsGrams2PoundsOunces(int kilograms, double grams, int &pounds, double &ounces);
void LitersMilliliters2GallonsOunces(int liters, double mill, int &gallons, double &ounces);
void GallonsOunces2LitersMilliliters(int gallons, double ounces, int &liters, double &mill);

#endif // UNIT_CONVERSION_H