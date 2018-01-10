#include <stdio.h>
#include <stdlib.h>

int nr;

struct cauta{

    int numar;
    struct cauta* legatura;
};

void Nr_aparitii(struct cauta* contor, int nr){
    int ct=0;  // ct=count

    while(contor != NULL){
        if(contor->numar == nr)
            ct++;
        contor=contor->legatura;
    }
    printf("%d", ct);
}


int main () {

    int i, n;

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

    scanf("%d", &nr);
    Nr_aparitii(pnou, nr);


    return 0;
}
