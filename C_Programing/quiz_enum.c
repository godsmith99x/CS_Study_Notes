/*
Author: Joel Godfrey-Smith
Purpose: This program is practice with enum
Date: 2020-09-02
License: n/a

*/

//includes the standard input output library
#include <stdio.h>
#include <stdbool.h>

enum company {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};

int main()  {

    enum company google;
    google = GOOGLE;

    enum company ebay;
    ebay = EBAY;

    enum company xerox;
    xerox = XEROX;

    printf("Xerox is at index %d.\n", xerox);
    printf("Google is at index %d.\n", google);
    printf("Ebay is at index %d.\n", ebay);

    return 0;
    
}