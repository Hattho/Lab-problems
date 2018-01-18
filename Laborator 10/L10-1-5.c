#include <stdio.h>
#include <stdlib.h>
#include <string.h>
FILE* f;

void    LongestLineLength (FILE* f){
    char s[100001];
    char t;
    int LongestLine = 0;

    while(feof(f) == 0){
        fgets(s, 1000, f);
        if(strlen(s) > LongestLine)
            LongestLine = strlen(s);
    }
    LongestLine--;
    printf("%d", LongestLine);

}



int main () {

    f = fopen("file2.txt", "r");

    if(f == NULL){
        printf("nu exista");
    }


    LongestLineLength (f);

    return 0;
}
