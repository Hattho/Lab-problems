#include <iostream>
using namespace std;

int nr;
int i;
int prim;


int main () {
    cin>>nr;
    prim=0;
    for( i=2; i*i<=nr; i++)
        if(nr%i == 0)
            prim=1;

    if((prim==0)||(nr==2))
        cout<<nr;


    return 0;

}
