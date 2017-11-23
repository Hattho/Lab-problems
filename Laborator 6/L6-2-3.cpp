#include <iostream>
#define N 10
using namespace std;

float ident[N][N];

int main () {

///se da urmatorul fragment de cod

   int row, col;
    for(row = 0; row < N; row++)
        for(col = 0; col < N; col++)
            if (row == col)
                ident[row][col] = 1.0;
            else
                ident[row][col] = 0.0;


///Se transforma codul de mai sus intr-unul cu un singur for, iar cu un singur pointer se trece prin fiecare element fara a ne folosi de linii, coloane sau contor

    float *p = &ident[0][0];


    for (  ; p-&ident[0][0] != N*N ; p++) {

        if( ( p-&ident[0][0] ) % ( N+1 ) == 0)
            *p= 1.0;
        else
            *p= 0.0;

        cout<<*p<<" ";


    }

}
