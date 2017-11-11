#include <iostream>
using namespace std;

int n;
int i,j;

int main () {
    cin>>n;

    for(i=1;i<=n;i++)
        for(j=1;j<=i;j++)
            cout<<j<<" ";

    return 0;

}
