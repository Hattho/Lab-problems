#include <stdio.h>
#include <stdlib.h>
int i, n;

struct cauta{

    int numar;
    struct cauta* legatura;
};

int GetNth(struct cauta* contor, int n){

    int index;
    scanf("%d", &index);
    int sol=0;
    if(index <= n){
        while(contor != NULL){
            sol++;
            if(sol == index)
                return contor->numar;
            contor=contor->legatura;
        }
    }

    return -1;

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


    printf("%d", GetNth(pnou, n));

    return 0;
}
