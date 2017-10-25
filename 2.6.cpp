#include <iostream>
using namespace std;

int i;
int patrat;
int N;

int main (){
    cin>>N;
    for(i=1;i<=N;i++){
        patrat=i*i;
        cout<<i<<" "<<patrat<<"\n";
    }
    return 0;
}
