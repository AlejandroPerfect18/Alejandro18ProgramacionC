#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Punteros!\n");
    int a;
    int *ptr;

    ptr = &a;
    *ptr = 100;
    *ptr = * ptr * *ptr;
    printf("\nValor de a:%d", a);
    return 0;
}
