#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int info;
    struct lista *next;
} lista;

lista *primp, *sfarsit, *pnou;


int n, i;

int main () {

    scanf("%d",&n);

    primp = (lista *)malloc( sizeof(lista) );
    scanf("%d",&primp->info);
    sfarsit = primp;

    for (i=1;i<n;i++) {
        pnou = (lista *)malloc( sizeof(lista) );
        scanf("%d",&pnou->info);
        sfarsit->next = pnou;
        sfarsit = pnou;
    }

    sfarsit->next = primp;

    lista *aux = primp;
    do {
        printf("%d ", aux->info);
        aux = aux->next;

    } while (primp != aux);


    return 0;
}



