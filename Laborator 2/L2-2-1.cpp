#include <iostream>
using namespace std;

int v[1001];
int putere2=0;
int putere5=0;
int i;
int nr;


int main () {
    cin >>nr;

    for(i=1;i<=nr;i++){

        cin>>v[i];

        while(v[i]%5==0){
            putere5++;
            v[i]/=5;
        }

        while(v[i]%2==0){
            putere2++;
            v[i]/=2;
        }

    }
    if( putere5 > putere2 )
            cout<<putere2;
        else
            cout<<putere5;

    return 0;

}



