#include <stdio.h>
#include <stdlib.h>
FILE *f1, *f2;
char character;
int main () {



    f1 = fopen("file1.txt","r");
    f2 = fopen("file2.txt","w");


    if(f1 == NULL){
        printf("File does not exist");
    }
    else{
        while(feof(f1) == 0){
             character = fgetc(f1);
            if(character >= 'a' && character <= 'z')
                character-='a'-'A';
            fputc(character, f2);
        }
    }


    fclose(f1);
    fclose(f2);

    return 0;
}
