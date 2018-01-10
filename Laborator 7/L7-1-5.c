#include <stdio.h>
#include <stdlib.h>

int i;
int suma;
float media;

struct numere{

    int nr;
    struct numere *legatura;
};


int main () {



    struct numere *primp, *pnou, *sfarsit;


    primp=NULL;

    for(i=0; i<25; i++){

        pnou = (struct numere*)malloc(sizeof (struct numere));
        scanf("%d", &pnou->nr);

        pnou->legatura=NULL;

        if(primp == NULL)
            primp = pnou;
        else
            sfarsit->legatura = pnou;

        sfarsit=pnou;

    }

    pnou = primp;

    suma=0;
    media=0;

    while( pnou != NULL){

        suma+=pnou->nr;

        pnou=pnou->legatura;
    }

    media =(float)suma/25;

    printf("%d %f", suma, media );

    return 0;
}
