#include <iostream>
using namespace std;

int n, a[10], minim, maxim;

 void minmax(int a[], int *min, int *max){
    *min=10000000;
    *max=0;

    for(int i=1;i<=n;i++){
        if(a[i]<*min)
            *min=a[i];
        if(a[i]>*max)
            *max=a[i];
    }



 }

int main () {

    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];

    minmax(a, &minim, &maxim);

    cout<<minim<<" "<<maxim;

    return 0;

}
