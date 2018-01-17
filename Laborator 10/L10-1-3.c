#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void  LineCounter(FILE* f){
    char s[100001];
    int i = 0;
    while(feof(f) == 0){
        fgets(s, 1000, f);
        i++;
    }
    printf("%d", i-1);
}


int main () {

    FILE *f1;

    f1 = fopen("file1.txt","r");

    if(f1 == NULL){
        printf("nu exista");
    }
    else{
         LineCounter(f1);
    }

    fclose(f1);


    return 0;
}
