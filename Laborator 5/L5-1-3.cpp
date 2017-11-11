#include <iostream>;
using namespace std;

int a[10][10];
int prod1, prod3;
int sum2, sum4;
int n;
int i,j;

int main() {
    cin>>n;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++){
            cin>>a[i][j];

            if( (i<j) && (i+j<n-1) )
                prod1+=a[i][j];

            if( (i<j) && (i+j>n-1) )
                sum4+=a[i][j];

            if( (i>j) && (i+j<n-1) )
                sum2+=a[i][j];

            if( (i>j) && (i+j>n-1) )
                prod3+=a[i][j];

        }

    cout<<prod1<<" "<<sum2<<" "<<prod3<<" "<<sum4;



    return 0;

}
