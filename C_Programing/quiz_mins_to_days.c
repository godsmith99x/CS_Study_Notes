/*

Author: Joel Godfrey-Smith
Purpose: This program convert minutes into minutes, days, weeks, months, and years
Date: 2020-09-24
License: n/a

*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    double min = 0;
    double min_in_hour = 60;
    double min_in_day = min_in_hour * 24;
    double min_in_week = min_in_day * 7;
    double min_in_year = min_in_week * 52;


    printf("Enter the number of minutes you wish to convert: ");

    scanf("%lg", &min); 

    
    
    return 0;

}