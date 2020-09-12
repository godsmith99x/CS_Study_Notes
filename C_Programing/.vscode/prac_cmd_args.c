/*
Author: Joel Godfrey-Smith
Purpose: This program takes input of string and number and prints them out to the console
Date: 2020-08-02
License: n/a

*/

//includes the standard input output library
#include <stdio.h>

int main(int argc, char *argv[]) {

    int numberOfArgs = argc;
    char *arg1 = argv[0];
    char *arg2 = argv[1];

    printf("Number of Arguments: %d\n", numberOfArgs);
    printf("Argument 1 is the program name: %s\n", arg1);
    printf("Argument 2 is the command line argument: %s\n", arg2);

    return 0;
}