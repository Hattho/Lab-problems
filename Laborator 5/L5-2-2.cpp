#include <iostream>
using namespace std;

int n, i, v[200];

int main () {

    cin>>n;

    n=n+n-1;

    for(i=0;i<n;i+=2)
        cin>>v[i];

    for(i=1;i<n;i+=2)
        v[i]=(v[i-1]+v[i+1])/2;

    for(i=0;i<n;i++)
       cout<<v[i]<<" ";

    return 0;

}
