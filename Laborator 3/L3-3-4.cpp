#include<iostream>
using namespace std;

int n;
int nr;
int i;
int k;

int prim (int nr){

    if(nr<2)
        return 0;
    if(nr==2)
        return 1;

    int d=0;

    for(int i=2;i*i<=nr;i++)
        if( (nr%i)==0 )
            d++;
    if(d==0)
        return 1;
    else
        return 0;

}

int main () {

    cin>>n;
    k=0;
    nr=1;
    while(k<=n){

        if( prim(nr) ){
            for(i=1;i<=nr;i++){
                cout<<i<<" ";
                k++;
                if(k>n)
                    break;
            }
        }
        else{
            for(i=1;i<=nr;i++){
                cout<<nr<<" ";
                k++;
                if(k>n)
                    break;
            }
        }
       nr++;
    }


    return 0;

}
