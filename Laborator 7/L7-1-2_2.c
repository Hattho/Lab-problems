#include <stdio.h>
#include <stdlib.h>


typedef struct{

    int info;
    struct lista *prev, *next;
} lista;

lista *primp, *sfarsit, *pnou;

int n, i, k;

void afStDr(lista *p) {
    while (p != NULL) {
        printf("%d ", p->info);
        p = p->next;
    }
    printf("\n");
}

void afDrSt(lista *p) {
    while (p != NULL) {
        printf("%d ", p->info);
        p = p->prev;
    }
    printf("\n");
}


int main () {

    scanf("%d",&n);

    primp = (lista *)malloc( sizeof(lista) );
    scanf("%d",&primp->info);
    primp->prev = NULL;
    sfarsit = primp;

    for (i=1;i<n;i++) {

        pnou = (lista *)malloc( sizeof(lista) );
        scanf("%d",&pnou->info);
        sfarsit->next = pnou;
        pnou->prev = sfarsit;
        sfarsit = pnou;

    }
    sfarsit->next = NULL;

   /// afStDr(p);
   /// afDrSt(u);

    pnou = primp;

    afStDr(pnou);
    afDrSt(sfarsit);


    return 0;
}




