#include <stdio.h>
#include <stdlib.h>

int binsearch( int v[], int n, int x){

    int st=1;
    int dr=n;
    int mid;
    while( st<= dr ){
        mid=(st+dr)/2;
        if (v[mid]==x)
            break;
        if(v[mid]<x)
            st=mid+1;
        else
            dr=mid-1;
    }
    if(st<=dr)
        return mid;
    else
        return -1;
}

int x,y,i,n,j,aux;
int v[1001];

int main () {
    scanf("%d", &x);
    scanf("%d", &n);

    for(i=0;i<n;i++)
        scanf("%d", &v[i]);

    for(i=0;i<n-1;i++)
        for( j=i+1;j<n;j++)
            if(v[i]>v[j]){
                aux=v[i];
                v[i]=v[j];
                v[j]=aux;
            }

    int sol=binsearch(v,n,x);

    printf("%d", sol);


    return 0;

}


