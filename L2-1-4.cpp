#include <iostream>
using namespace std;

int nrElevi;
double nota[10001];
int admis=0;
int i;
int sub8;

int main () {

    cin>>nrElevi;
    sub8=0;

    for( i=1; i<=nrElevi; i++){
        cin>>nota[i];
        if( nota[i] >= 5 )
            admis++;
        if(nota[i] < 8)
            sub8++;

    }

    if(admis == nrElevi)
        cout<<"toti elevii au trecut examenul"<<"\n";
    else
        cout<<"nu au trecut toti elevii examenul"<<"\n";

    cout<<(sub8*100)/nrElevi<<"%";


    return 0;

}
