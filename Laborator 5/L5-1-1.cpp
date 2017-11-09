#include <iostream>

using namespace std;

int v[100];
int i, n;
int average;
int nrElem;

int main () {
    cin>>n;

    nrElem=0;

    for(i=0;i<n;i++){
        cin>>v[i];
    }

    if(v[0] == v[1]){
        nrElem++;
    }

    for(i=1;i<n-1;i++){
        average= (v[i-1]+v[i+1])/2;

        if ( v[i] == average )
            nrElem++;
    }

    if( v[n] == v[n-1] ){
        nrElem++;
    }

    cout<<nrElem;



    return 0;

}
