#include <iostream>
using namespace std;

int x;
int y;

int main () {
    cin>>x>>y;

    if(x>0){
        if(y>0)
            cout<<"punctul este in cadranul 1";
        else
            cout<<"punctul este in cadranul 4";
    }
    else{
        if( y>0 )
            cout<<"punctul este in cadranul 2";
        else
            cout<<"punctul este in cadranul 3";
    }


    return 0;

}


