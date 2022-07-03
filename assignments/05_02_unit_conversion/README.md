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


## Step 2

Write pairs of functions to convert:

- feet and inches to meters and centimeters and vice versa
- pounds and ounces to kilograms and grams and vice versa
- liters and milliliters to gallons and ounces and vice versa

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


[Reference](https://www.metric-conversions.org/)
