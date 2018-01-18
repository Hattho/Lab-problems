#include <stdio.h>
#include <stdlib.h>
#include <string.h>
FILE* f;

void    LongestLineLength (FILE* f){

    char c;
    int nr_cuv = 0;

    while(feof(f) == 0){
        c = fgetc(f);
        if(c == '\n' || c==' '){
            nr_cuv++;
        }
    }

    printf("%d", nr_cuv);

}


int main () {
    f = fopen("file2.txt", "r");

    if(f == NULL){
        printf("nu exista");
    }

    LongestLineLength (f);

    return 0;
}
