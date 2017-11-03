#include <stdio.h>

int n;

int main () {

    do{

    scanf ( "introduceti o valoare cuprinsa intre 0 si 90");
    scanf( "%d", &n);

    if ((n>=0) && (n<=90))
        break;
    else
        printf( "eroare");


    }
    while(1);

    //printf( "%d", n);

    return 0;

}
