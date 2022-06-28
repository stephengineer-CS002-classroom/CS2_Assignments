# 06_03_popular_names

- Accept [06_03_popular_names](https://classroom.github.com/a/lS2pVraw)
- Get [main.cpp](main.cpp)


## Description

The text file [babynames2012.txt](babynames2012.txt) contains a list of the 1000 most popular boy and girl names in the United States for the year 2012 as compiled by the Social Security Administration.

This is a space-delimited file of 1000 entries in which the rank is listed first, followed by the corresponding boy name and girl name. The most popular names are listed first and the least popular names are listed last. for example, the file begins with

```
1 Jacob Sophia
2 Mason Emma
3 Ethan Isabella
```

This indicates that Jacob is the most popular boy name and Sophia is the most popular girl name. Mason is the second most popular boy name and Emma is the second most popular girl name.

Write a program that allows the user to input a name. The program should then read from the file and search for a matching name among the girls and boys. If a match is found, it should output the rank of the name. The program should also indicate if there is no match.

For example, if the user enters the name "Justice" then the program should output:

```
Justice is ranked 519 in popularity among boys. Justice is ranked 518 in popularity among girls.
```

If the user enters the name "Walter" then the program should output:

```
Walter is ranked 376 in popularity among boys. Walter is not ranked among the top 1000 girl names.
```