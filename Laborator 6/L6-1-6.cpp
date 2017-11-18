#include <iostream>
using namespace std;

int total_sec;
int h, m, s;

void split_time(int total_sec, int *hr, int *minute, int *sec){

    *hr=(total_sec/60)/60;

    *minute= total_sec/60 - *hr *60;

    *sec= total_sec- total_sec/60 *60;

}

int main () {

    cin>>total_sec;

    split_time(total_sec, &h, &m, &s);

    cout<<h<<" "<<m<<" "<<s;

    return 0;

}

