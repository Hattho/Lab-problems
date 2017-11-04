#include <iostream>
#include <cmath>
using namespace std;

int n;
double a,b,c,x,d;
double pi=3.1415926535897;

int ecuatia1(int n, double x, double a, double b, double c,double d){

    double y;

    y= a* pow(x,2*n) + b* pow(x,n) + c*x + d;

    return y;

}

int ecuatia2(double x, double a, double b, double c){

    double y;

    y= a* pow(x,n) + b*x + cos( pi*c );


    return y;

}

int main () {

    cin>>a>>b>>c>>d>>x>>n;

    cout<<ecuatia1(n,x,a,b,c,d)<<"\n"<<ecuatia2(x,a,b,c);

    return 0;

}
