#include <stdio.h>
#include <stdlib.h>
int i, n;

struct cauta{

    int numar;
    struct cauta* legatura;
};

void InsertNth(struct cauta *primp,struct cauta *pnou,struct cauta *sfarsit,  int k){
    pnou = primp;

    int contor =0;
    while (pnou != NULL && pnou->numar<k){
        pnou = pnou->legatura;
        contor++;
    }


    if (pnou != NULL) {

        struct cauta *q= (struct cauta *)malloc( sizeof(struct cauta) );

        if (pnou -> legatura == NULL) {
            pnou->legatura = q;
            q->legatura = NULL;
            sfarsit = q;
            printf("continutul noului nod:\n");
            scanf("%d",&q->numar);

        } else {
            struct cauta *aux = pnou->legatura;
            pnou->legatura = q;
            q->legatura = aux;
            printf("continutul noului nod:\n");
            scanf("%d",&q->numar);

        }

    }

}

int main () {

    struct cauta *primp, *pnou, *sfarsit;

    primp=NULL;
    printf("numar de noduri:\n");

    scanf("%d", &n);

    printf("continut noduri:\n");

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

    while (pnou != NULL) {
        printf("%d ", pnou->numar);
        pnou = pnou->legatura;
    }

    printf("\n");
    int k;
    printf("inserez un nod nou dupa continutul k\n");
    scanf("%d",&k);

    InsertNth(primp,pnou,sfarsit,k);

    pnou=primp;

    while (pnou != NULL) {
        printf("%d ", pnou->numar);
        pnou = pnou->legatura;
    }

    return 0;
}



