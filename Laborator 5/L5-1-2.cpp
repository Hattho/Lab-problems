#include <iostream>
#include <fstream>
using namespace std;

ifstream fin ("progresie.in");
int a, b, c; ///termenii progresiei
int progresie; ///parametrul prin care verificam la final daca termenii sun in progresie sau nu
int ratie;

int main () {

    fin>>a;
    fin>>b;

    while(fin>>c){

        if(b==(a+c)/2){
            progresie=1;
            ratie=c-b;
        }
        else {
            progresie=0;
            break;
        }
        a=b;
        b=c;

    }

    if(progresie)
        cout<<ratie;
    else
        cout<<"numerele nu sunt in progresie aritmetica";


    return 0;

}
