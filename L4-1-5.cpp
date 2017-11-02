#include <iostream>
using namespace std;

void forLoop(int i){
    for(i=2;i<=60;i+=2)
        cout<<i<<" ";
    cout<<"\n";
}

void whileLoop(int i){
    i=2;
    while(i<=60){
        cout<<i<<" ";
        i+=2;
    }
    cout<<"\n";
}

void doWLoop(int i){
    i=2;

    do{
        cout<<i<<" ";
        i+=2;

    }while(i<=61);

    cout<<"\n";

}

int main (){
    int i;
    forLoop(i);

    whileLoop(i);

    doWLoop(i);



    return 0;

}
