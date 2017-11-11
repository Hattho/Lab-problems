#include <iostream>
using namespace std;

int n;
int i,j,k;

int main () {
    cin>>n;
    k=0;
    for(i=1;i<=n;i++){
        if(k==n)
            break;

        for(j=1;j<=i;j++){
                k++;
                cout<<j<<" ";
                if(k==n)
                    break;
        }
    }
    return 0;

}
