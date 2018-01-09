#include <iostream>
using namespace std;

int nr_structuri;
int i;
int *p;
int main() {

    cin >> nr_structuri;

    p = new int[n];

    for (i = 0; i < nr_structuri; i++)
        cin >> p[i];

    for (i = 0; i < nr_structuri; i++)
        cout << p[i] << " ";

    return 0;
}
