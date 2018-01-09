#include <iostream>
using namespace std;

int a[101];
int n;
int x;
int i;
int lefti, righti,mid;

int main() {

    cin >> n >> x;

    for (i = 0; i < n; i++)
        cin >> a[i];

    lefti = 0;
    righti = n-1;


    while (lefti <= righti) {

        mid = lefti / 2 + righti / 2;

        if (a[mid] == x)
            break;

        if (a[mid] < x)
            lefti = mid + 1;
        else
            righti = mid - 1;
    }

    if (lefti <= righti)
        cout << mid << "\n" ;
    else
        cout << "nu exista\n" ;


    return 0;
}
