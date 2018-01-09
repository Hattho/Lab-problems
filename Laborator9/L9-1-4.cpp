#include <iostream>
using namespace std;

int a[10001];
int i;
int aux,contor;
int n;

int main() {

    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }

    do {
        contor = 0;
        for (i = 0; i < n-1; i++) {
            if (a[i] > a[i + 1]) {
                aux=a[i];
                a[i]=a[i+1];
                a[i+1]=aux;
                contor++;

            }
        }
    }while (contor != 0);

    for (i = 0; i < n; i++)
        cout << a[i] << " ";


    return 0;
}
