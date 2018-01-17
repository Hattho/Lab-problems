#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void display(FILE* f){
    char s[1000];
    while(feof(f) == 0){
        fgets(s, 1000, f);
        printf("%s", s);
    }

}
FILE *f1;

int main () {

    f1 = fopen("file1.txt","r");

    if(f1 == NULL){
        printf("Eroare");
    }
    else{
        display(f1);
    }

    fclose(f1);

    return 0;
}
