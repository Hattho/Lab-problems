#include <iostream>
using namespace std;

int A[101];
int i;
int minim=1000000000;
int maxim=-1;
int nrElemente;

int main () {

    cin>>nrElemente;

    for( i=1; i<=nrElemente; i++){
        cin>>A[i];
        if( A[i]> maxim)
            maxim=A[i];
        if( A[i]<minim)
            minim=A[i];
    }

    cout<<minim<<" "<<maxim;

    return 0;

}
