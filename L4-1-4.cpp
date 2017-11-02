#include <iostream>
using namespace std;

int x,y;

void inter( int* a, int* b){
    int aux;
    aux=*b;
    *b=*a;
    *a=aux;

}

int main (){
    cin>>x>>y;

    inter(&x,&y);

    cout<<x<<" "<<y;


    return 0;

}

