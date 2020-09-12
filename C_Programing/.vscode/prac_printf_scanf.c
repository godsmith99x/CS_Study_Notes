/*
Author: Joel Godfrey-Smith
Purpose: This program takes input of string and number and prints them out to the console
Date: 20200802
License: n/a

*/

//includes the standard input output library
#include <stdio.h>

int main()
{
    //creates a string array variable named str and integer variable named i
    char str[100];
    int i;

    //requests user to enter a number and a word
    printf("Enter a number and a word: ");

    //reads input from users terminal. expects two arguments found within 
    //double-quotes, must include & before i for compiler to move pointer 
    //to correct location of i variable
    scanf("%d %s", &i, str);

    printf("\nYou entered: %d and %s\n", i, str);

    return 0;
}
