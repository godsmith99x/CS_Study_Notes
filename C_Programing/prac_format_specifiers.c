/*
Author: Joel Godfrey-Smith
Purpose: This program takes input of string and number and prints them out to the console
Date: 20200802
License: n/a

*/

//includes the standard input output library
#include <stdio.h>

int main(void)
{
    int intergerVar = 100;
    float floatingVar = 331.79;
    double doubleVar = 8.44e+11;
    char charVar = 'W';

    _Bool boolVar = 0;

    printf("intergerVar = %i floatingVar = %f\n", intergerVar, floatingVar);
    printf("floatVar = %f\n", floatingVar);
    printf("doubleVar = %e\n", doubleVar);
    printf("doubleVar = %g\n", doubleVar);
    printf("charVar = %c\n", charVar);

    printf("boolVar = %i\n", boolVar);

    float x = 3.9993232323;

    printf("x = %.2f\n", x);

    return 0;
}
