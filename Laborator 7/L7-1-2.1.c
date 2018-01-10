#include <stdlib.h>

///creati o lista legata simplu
int i, n;

struct listas{

    int data;
    struct listas *legatura;      ///declaram structura lista
};


int main () {

    struct listas *primp, *pnou, *sfarsit;  ///primp=pointer pt prima struct , pnou= pointer noua struct

    scanf("%d", &n);  ///nr de structuri din lista



    primp=NULL;

    for(i=0; i<n; i++){

        pnou=(struct listas)malloc( sizeof(struct listas) );  /// se aloca memorie si adresa memoriei sa salveaza in pnou
        scanf("%d",&pnou->data);                        /// se introduc valorile din struc. de la tastatura
        pnou->legatura=NULL;

        if(primp==NULL)
            primp=pnou;
        else
            sfarsit->legatura=pnou;  /// se creeaza legatura cu campul nou creat

        sfarsit=pnou;
    }

    pnou=primp;
    while(pnou != NULL){
        printf("%d ",pnou->data);
        pnou=pnou->legatura;
    }

    return 0;
}
