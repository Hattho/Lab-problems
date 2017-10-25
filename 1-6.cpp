#include <iostream>
using namespace std;

int i;
int numar;
int sum;
int N;

int main(){

    cin>>N;

    sum=0;

	for( i=0; i<N; i++){
		cin>>numar;
		sum+=numar;
	}
	cout<<sum;

	return 0;


}

