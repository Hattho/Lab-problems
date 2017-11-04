#include <iostream>
using namespace std;

int v[11];
int mini;
int maxi;
int i;

void NrMinMax(int v[],int &minim, int &maxim){
    minim=101;
    maxim=0;

    for(i=1;i<=10;i++){
        if(v[i]<minim)
            minim=v[i];
        if(v[i]>maxim)
            maxim=v[i];
    }

}

int main () {

    for(i=1;i<=10;i++)
        cin>>v[i];

    NrMinMax(v,mini,maxi);

    cout<<mini<<" "<<maxi;



    return 0;

}


