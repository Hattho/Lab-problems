#include <stdlib.h>
#include <stdio.h>

char s[255];
char t[255];

int a,p,i;

int strend(char s[], char t[]){
    int i, j, k = 0;
    for(i=strlen(s)-1, j=strlen(t)-1; j >= 0; i--, j--){
        if(s[i] == t[j])
            k = 1;
        else
            return 0;
    }
    return 1;

}

int main () {

    gets(s);
    gets(t);


    printf( "%d ", strend(s,t));

    return 0;

}

