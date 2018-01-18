#include <iostream>
#include <stdlib.h>

using namespace std;
int v[100010];

int n, p, u, i;
int plaseaza(int st, int dr) {
    int p = st;
    int u = dr;
    int i = 0;
    int j = -1;

    while (p!=u) {
        if (v[p] > v[u]) {
            int aux = v[p];
            v[p] = v[u];
            v[u] = aux;

            aux = i;
            i = -j;
            j = -aux;

        }
        p += i;
        u += j;
    }

    return p;

}

void sorteaza(int st, int dr) {

    if (st < dr) {

        p = plaseaza(st, dr);
        sorteaza(st, p-1);
        sorteaza(p+1, dr);
    }

}

int main () {

 

    cin>>n;
    for (i=1;i<=n;i++)
        cin>>v[i];

    sorteaza(1, n);

    for (i=1;i<=n;i++)
        cout<<v[i]<<" ";


    return 0;
}
