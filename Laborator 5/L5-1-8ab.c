#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int nrcuv,i;
int a [255];
char s[1001];

int main (){

    gets(s);
    nrcuv=0;

    for(i=0;i<=strlen(s)-1;i++){
        if(s[i]==' ')
            nrcuv++;
        else
            a[toupper(s[i])]++;
    }

    nrcuv++;

    printf( "%d\n", nrcuv);

   for(i='A';i<='Z';i++){
       printf( "%c ", i);
       printf( "%d\n", a[i]);
   }


    return 0;

}
