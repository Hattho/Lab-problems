#include <stdlib.h>
#include <stdio.h>


int strlen_a( char s[]) {
    int i;
    for ( i = 0;;i++)
        if (s[i] == 0)
            return i;
}


int strlen_p(char* s){
    int i = 0;
    for(i = 0;;i++)
        if(*(s+i) == 0)
            return i;
}

char s[255];

int a,p,i;

int main () {

    gets(s);

    a=strlen_a(s);

    p=strlen_p(s);

    printf( "%d %d", a, p);

    return 0;

}
