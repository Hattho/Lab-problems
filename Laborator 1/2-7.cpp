#include <iostream>
using namespace std;
#define N 100
int i;
int main (){

    for(i=1;i<=N;i++){
        if((i>=32)&&(i<=39))
            cout<<i<<"\n";
    }
    return 0;
}

