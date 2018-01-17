#include <stdio.h>
#include <stdlib.h>
#include <string.h>
FILE* f;

void    LongestLineLength (char* file){

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


    char file[30] = "file2.txt";

    LongestLineLength (file);


    return 0;
}
