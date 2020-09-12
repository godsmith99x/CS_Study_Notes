/*
Author: Joel Godfrey-Smith
Purpose: This program is practice with operators.
Date: 2020-09-03
License: n/a

*/

//includes the standard input output library
#include <stdio.h>
#include <stdbool.h>

int main() {

    //example of arithmetic operator
    int a = 33;
    int b = 15;
    int result = 0;

    result = a + b;

    printf("The result of a + b is %d.\n", result);

    //example of logical operator
    _Bool c = true;
    _Bool d = true;
    _Bool resultBool;

    resultBool = c && d;

    printf("The result of c && d is %d.\n", resultBool);

    //example of assignment operator
    int e = 33;
    int f = 15;
    
    e += f;

    printf("The result of e += f is %d.\n", e);

    //example of bitwise operator
    unsigned int g = 60; //0011 1100 in binary
    unsigned int h = 13; //0000 1101 in binary
    int resultBitwise = 0;

    resultBitwise = g & h; //compares each bit of g and h to see if they are both true, result should be 0000 1100

    printf("The result of g & h is %d.\n", resultBitwise); //should print 12 which is 0000 1100 in decimal

    //example of shift operator
    unsigned int i = 60; //0000 0011 1100 in binary
    unsigned int j = 13; //0000 0000 1101 in binary
    int resultShift = 0;

    resultShift = i << 4; //shifts i by 4 bits to left, result should be 0011 1100 0000

    printf("The result of i << 4 is %d.\n", resultShift); //should print 960 which is 0011 1100 0000 in decimal

    return 0;
}