#include <stdio.h>
#include <stdlib.h>

int i, n;

struct cauta{

    int numar;
    struct cauta* legatura;
};


int sum(struct cauta* cursor){

    int suma = 0;

    while(cursor != NULL){
        suma+= cursor->numar;
        cursor=cursor->legatura;
    }

    return suma;
}


int main () {



    struct cauta *primp, *pnou, *sfarsit;

    primp=NULL;

    scanf("%d", &n);

    for(i=0; i<n; i++){

        pnou=(struct cauta*)malloc( sizeof(struct cauta));

        scanf("%d", &pnou->numar);

        pnou->legatura=NULL;

        if( primp == NULL)
            primp=pnou;
        else
            sfarsit->legatura=pnou;

        sfarsit=pnou;
    }

    pnou=primp;


    printf("%d", sum(pnou));

    return 0;
}
