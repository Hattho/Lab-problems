#include <stdio.h>
#include <stdlib.h>
int i, n;

struct cauta{

    int numar;
    struct cauta* legatura;
};

void DeleteList(struct cauta* primp){

    struct cauta *aux = primp;

    while (aux != NULL) {
        primp = aux;
        aux = aux->legatura;
        free(primp);
    }

    primp = NULL;

    printf("Lista a fost stearsa");

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

    DeleteList(primp);

    return 0;
}

