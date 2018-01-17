#include <stdio.h>
#include <stdlib.h>
#include <string.h>
FILE* f;

void    LongestLineLength (char* file){
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

    char file[30] = "file2.txt";

    LongestLineLength (file);

    return 0;
}
