#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Punteros!\n");
    int a = 0;
    int b = 500;
    int * ptr = &b;
    ptr = 100;
    printf("\nValor de a: %d", a);
    printf("\nValor de a: %d", *ptr);
    return 0;
}
