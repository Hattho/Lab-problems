#include <iostream>

using namespace std;

int n, v[1001];

int find_largest(int *a, int n){

    int maxim=0;

    for(int i=0; i<n; i++){
        if(a[i] > maxim){
            maxim=a[i];
        }

    }
    return maxim;
}

int main () {

    cin>>n;

    for(int i=0; i<n; i++)
        cin>>v[i];

    cout<<find_largest(v, n);

    return 0;
}
