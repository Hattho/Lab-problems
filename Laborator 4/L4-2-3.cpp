#include <iostream>
using namespace std;

double a[3][32];
int i,j;

void tempMedieMaxMin(double a[3][32]){
    double tmin=0;
    double tmax=0;


    for(int i=1;i<=2;i++)
        for(int j=1;j<=31;j++){
            if(i==1)
                tmin+=a[i][j]/31;
            else
                tmax+=a[i][j]/31;
        }

   cout<<tmin<<" "<<tmax<<" ";

}

int tempMinMax(double a[3][32]){
    double minim=200;
    double maxim=-50;

    for(i=1;i<=2;i++)
        for(j=1;j<=31;j++){
            if(i==1){
                if(a[i][j]<minim)
                    minim=a[i][j];
            }

            else
                if(a[i][j]>maxim)
                    maxim=a[i][j];
        }

    cout<<minim<<" "<<maxim;

}


int main () {

    for(i=1;i<=2;i++)
        for(j=1;j<=31;j++)
            cin>>a[i][j];

   tempMedieMaxMin(a);
   cout<<"\n";

   tempMinMax(a);

    return 0;

}

