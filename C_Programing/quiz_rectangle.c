/*

Author: Joel Godfrey-Smith
Purpose: This program calculates the perimeter and area of a rectangle and prints them out to the console
Date: 2020-09-02
License: n/a

*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    float width = 0;
    float height = 0;
    

    printf("Enter the width and then the height of the rectangle: ");

    scanf("%g %g", &width, &height); 

    float perimeter = (width + height) * 2;
    float area = width * height;

    printf("\nThe perimeter is %g m and the area is %g m^2.\n", perimeter, area);

    return 0;

}