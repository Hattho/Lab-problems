#include <stdio.h>
#include <stdlib.h>

typedef struct list{

    int data;
    struct list* next;

} list;

void merge(list* cursor1, list* cursor2){

    list *sfarsit3, *pnou3, *primp3;

    primp3=NULL;

    while(cursor1!=NULL && cursor2!=NULL){

        pnou3 =(list*)malloc(sizeof(list));

        pnou3->next=NULL;

        if(cursor1->data > cursor2->data){
            pnou3->data = cursor2->data;
            cursor2 = cursor2->next;
        }
        else{
            pnou3->data = cursor1->data;
            cursor1 = cursor1->next;
        }
        if(primp3 == NULL)
            primp3 = pnou3;
        else
            sfarsit3->next = pnou3;
        sfarsit3 = pnou3;
    }

    while(cursor1 != NULL){

        pnou3 =(list*)malloc(sizeof(list));

        pnou3->data = cursor1->data;
        pnou3->next=NULL;

        sfarsit3->next = pnou3;
        sfarsit3 = pnou3;
        cursor1 = cursor1->next;
    }

    while(cursor2 != NULL){

        pnou3 =(list*)malloc(sizeof(list));

        pnou3->data = cursor2->data;
        pnou3->next=NULL;

        sfarsit3->next = pnou3;
        sfarsit3 = pnou3;
        cursor2 = cursor2->next;
    }
    pnou3 = primp3;

    while(pnou3 != NULL){
        printf("%d ", pnou3->data);
        pnou3 = pnou3->next;
    }

}

int main () {

    int i, n;

    list *primp, *pnou, *sfarsit;

    list *primp2, *pnou2, *sfarsit2;

    primp = NULL;

    scanf("%d", &n);

    for(i=0; i<n; i++){

        pnou=(list*)malloc( sizeof(list));

        scanf("%d", &pnou->data);

        pnou->next=NULL;

        if( primp == NULL)
            primp = pnou;
        else
            sfarsit->next=pnou;

        sfarsit=pnou;
    }

    primp2=NULL;

    int m;
    scanf("%d", &m);

    for(i=0; i<m; i++){

        pnou2=( list*)malloc( sizeof(list) );

        scanf("%d", &pnou2->data);

        pnou2->next=NULL;

        if( primp2 == NULL)
            primp2=pnou2;
        else
            sfarsit2->next=pnou2;

        sfarsit2=pnou2;
    }

    pnou = primp;
    pnou2 = primp2;



    merge(pnou, pnou2);



    return 0;
}
