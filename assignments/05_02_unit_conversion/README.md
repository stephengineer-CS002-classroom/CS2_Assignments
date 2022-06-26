# 05_02_unit_conversion

- Accept [05_02_unit_conversion](https://classroom.github.com/a/WgL0anNC)
- Get [main.cpp](main.cpp)
- Get [unit_conversion.h](unit_conversion.h)

## Description:

Rather than rewriting code to convert one unit to another multiple times, we will write one single function to convert any unit of measurement to any other unit of measurement. Then, we will build individual functions to convert specific units of measurement. 

## Function

- Declare following functions in `includes/unit_conversion/unit_conversion.h`
- Implement following functions in `includes/unit_conversion/unit_conversion.cpp`

## Step 1

Universal Conversion Function: Write a single function to convert any pairs of units of measurement to any other pairs of units, provided it is passed the necessary information to do the conversion. All four types of conversions must be handled by the single function.

```c++
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
```

## Step 2

Write pairs of functions to convert:

- feet and inches to meters and centimeters and vice versa
- pounds and ounces to kilograms and grams and vice versa
- liters and milliliters to gallons and ounces and vice versa

```c++
void FeetInches2MetersCentimeters(int feet, double inches, int &meters, double &cm);
void MetersCentimeters2FeetInches(int meters, double cm, int &feet, double &inches);
void PoundsOunces2KilogramsGrams(int pounds, double ounces, int &kilograms, double &grams);
void KilogramsGrams2PoundsOunces(int kilograms, double grams, int &pounds, double &ounces);
void LitersMilliliters2GallonsOunces(int liters, double mill, int &gallons, double &ounces);
void GallonsOunces2LitersMilliliters(int gallons, double ounces, int &liters, double &mill);
```

### Constants local to specific conversion functions

These will be declared and used within specific conversion functions (FeetInches2MetersCentimeters for example) Then the specific conversion functions will call the universal conversion function passing it these constants. Like this:

```c++
Convert (feet, inch, meters, cm, IN_IN_FEET, CM_PER_IN, CM_IN_METERS)
```

### Conversion between lengths, weight, and volume:

| Conversion factors | Value    |
| ------------------ | ---------|
| IN_IN_FOOT         | 12       |
| CM_IN_METER        | 100      |
| CM_PER_IN          | 2.54     |
| IN_PER_CM          | 0.393701 |
| OZ_IN_LB           | 16       |
| GRAM_IN_KG         | 1000     |
| GRAM_PER_OZ        | 28.3495  |
| OZ_PER_GRAM        | 0.035274 |
| ML_IN_LITER        | 1000     |
| OZ_IN_GALLON       | 128      |
| ML_PER_OZ          | 0.033814 |
| OZ_PER_ML          | 29.5735  |

