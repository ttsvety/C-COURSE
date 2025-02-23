#include <stdio.h>

int main(){

    enum Company {GOOGLE, FACEBOOK, XEROX, YAHOO=10, EBAY, MICROSOFT};

    enum Company xerox = XEROX;
    enum Company google = GOOGLE;
    enum Company ebay = EBAY;

    printf("XEROX is : %d\nGOOGLE is : %d\nEBAY is : %d", xerox, google, ebay);

    return 0;
}