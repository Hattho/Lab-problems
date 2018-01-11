#include <stdio.h>
#include <stdlib.h>

int i, n,m;

struct lista1{

    char x;
    struct lista1* legatura1;
};


void concatenare(struct lista1* sfarsit1, struct lista1* primp2, struct lista1* pnou1){

    sfarsit1->legatura1 = primp2;

    while ( pnou1 != NULL){

        printf( "%c ", pnou1->x );

        pnou1= pnou1->legatura1;

    }


}


int main () {

    struct lista1 *primp1, *pnou1, *sfarsit1;
    struct lista1 *primp2, *pnou2, *sfarsit2;

    primp1=NULL;
    primp2=NULL;

    scanf("%d", &n);

    for(i=0; i<n; i++){

        pnou1=(struct lista1*)malloc( sizeof(struct lista1));

        scanf("%d", &pnou1->x);

        pnou1->legatura1=NULL;

        if( primp1 == NULL)
            primp1=pnou1;
        else
            sfarsit1->legatura1=pnou1;

        sfarsit1=pnou1;
    }

    pnou1=primp1;

    scanf("%d", &m);

for(i=0; i<n; i++){

        pnou2=(struct lista1*)malloc( sizeof(struct lista1));

        scanf("%d", &pnou2->x);

        pnou2->legatura1=NULL;

        if( primp2 == NULL)
            primp2 = pnou2;
        else
            sfarsit2->legatura1=pnou2;

        sfarsit2=pnou2;
    }

    pnou2=primp2;

    concatenare(sfarsit1, primp2, pnou1);

    return 0;
}
