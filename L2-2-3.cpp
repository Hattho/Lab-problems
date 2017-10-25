#include <iostream>
#include<math.h>
using namespace std;

double a, b, c;
double x1;
double x2;
double delta;

int main () {

    cin>>a>>b>>c;

    x1= ( -b+ sqrt(b*b-4*a*c) ) / (2*a);
    x2= ( -b - sqrt(b*b-4*a*c) ) / (2*a);

    cout<<x1<<"\n"<<x2;



    return 0;

}

