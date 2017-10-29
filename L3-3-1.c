#include<stdio.h>

int i,j;
int a[10001];
int b[10001];
int c[20002];
int nrElementeA;
int nrElementeB;
int nrElementeC;

int main(){
    scanf( "%d", &nrElementeA);
    scanf( "%d", &nrElementeB);

    for(i=1;i<=nrElementeA;i++)
        scanf("%d", &a[i]);

    for(j=1;j<=nrElementeB;j++)
        scanf("%d", &b[j]);

    i=j=1;
    nrElementeC=0;

    while( (i <= nrElementeA) && (j <= nrElementeB)){

        if( a[i] < b[j] ){
            ++nrElementeC;
            c[nrElementeC]=a[i];
            i++;
        }
        else
            c[++nrElementeC]=b[j++];

    }

    for(;i<=nrElementeA;i++)
        c[++nrElementeC]=a[i];

    for(;j<=nrElementeB;j++)
        c[++nrElementeC]=b[j];

    for(i=1;i<=nrElementeC;i++)
        printf("%d ", c[i]);

return 0;

}
