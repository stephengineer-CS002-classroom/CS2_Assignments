#ifndef UNIT_CONVERSION_H
#define UNIT_CONVERSION_H

#include <iostream>

// Declaration

void Convert(int X, double x, int &Y, double &y, int xInX, double yPERx, int yInY);
void FeetInches2MetersCentimeters(int feet, double inches, int &meters, double &cm);
void MetersCentimeters2FeetInches(int meters, double cm, int &feet, double &inches);
void PoundsOunces2KilogramsGrams(int pounds, double ounces, int &kilograms, double &grams);
void KilogramsGrams2PoundsOunces(int kilograms, double grams, int &pounds, double &ounces);
void LitersMilliliters2GallonsOunces(int liters, double mill, int &gallons, double &ounces);
void GallonsOunces2LitersMilliliters(int gallons, double ounces, int &liters, double &mill);

#endif // UNIT_CONVERSION_H