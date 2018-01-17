#include <stdio.h>
#include <stdlib.h>
#include <string.h>
FILE* f;
void   CharacterCounter(char* file){


    int nr_caractere = 0;

    while(feof(f) == 0){
        fgetc(f);
        nr_caractere++;
    }

    printf("%d", nr_caractere);

}


int main () {
    f = fopen("file2.txt", "r");

    if(f == NULL){
        printf("File does not exist");
        return;
    }


    char file[30] = "file2.txt";

    CharacterCounter(file);


    return 0;
}
