#include <stdio.h>
#include <stdlib.h>

int i,j,n;
typedef struct listas{

    int data;
    struct listas *legatura;      ///declaram structura lista
}listas;


int main () {

     listas *primp, *pnou, *sfarsit;  ///primp=pointer pt prima struct , pnou= pointer noua struct

     listas *primp2, *pnou2, *sfarsit2;

    scanf("%d", &n);  ///nr de structuri din lista



    primp=NULL;

    for(i=0; i<n; i++){

        pnou=( listas*)malloc( sizeof(listas) );  /// se aloca memorie si adresa memoriei sa salveaza in pnou
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

    primp2=NULL;

    for(i=0; i<n; i++){

        pnou2=( listas*)malloc( sizeof(listas) );  /// se aloca memorie si adresa memoriei sa salveaza in pnou

        pnou=primp;
        for(j=0;j<n-i-1;j++){
            pnou=pnou->legatura;
        }

        pnou2->data=pnou->data;

        pnou2->legatura=NULL;

        if(primp2==NULL)
            primp2=pnou2;
        else
            sfarsit2->legatura=pnou2;  /// se creeaza legatura cu campul nou creat

        sfarsit2=pnou2;
    }

    printf("\n");

    pnou2=primp2;
    while(pnou2 != NULL){
        printf("%d ",pnou2->data);
        pnou2=pnou2->legatura;
    }


    return 0;
}
