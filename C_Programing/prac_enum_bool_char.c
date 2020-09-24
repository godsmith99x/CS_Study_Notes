/*
Author: Joel Godfrey-Smith
Purpose: This program is practice with enum
Date: 2020-09-02
License: n/a

*/

//includes the standard input output library
#include <stdio.h>
#include <stdbool.h>

enum cpu {arm, x86};

int main()
{
    
    enum cpu amdRyzen;
    amdRyzen = x86;

    enum cpu huaweiKunpeng920;
    huaweiKunpeng920 = arm;

    bool sameCPU = (amdRyzen == huaweiKunpeng920);

    //prints 0 because it is false
    printf("%d", sameCPU);

    char newLine = '\n';

    //then it prints a new, blank line
    printf("%c", newLine);

    return 0;
}
