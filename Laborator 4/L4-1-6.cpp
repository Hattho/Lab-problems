#include <iostream>
#include <cmath>
using namespace std;

int ipotenuza( int a, int b){
    int c;
    c= sqrt(a*a + b*b);

    return c;

}

void ipot( int a, int b, int* ip){
    *ip= sqrt (a*a + b*b);
}

int main (){

    int x,y;
    int ip;

    cin>>x>>y;

    ipot(x, y ,&ip);

    cout<<ip<<"\n";

    cout<<ipotenuza(x,y);


    return 0;

}

