#include <stdio.h>
#include <stdlib.h>

#define swap(t, x, y)  t aux=x; x=y; y=aux;

int x,y;

int main () {
   scanf("%d", &x);

    scanf("%d", &y);

    swap(int,x,y);

     printf("%d ", x);

    printf("%d", y);



    return 0;

}
