#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Punteros\n");
    int a = 10;
    int b = 500;
    int *ptr;

    ptr = &a;
    printf("\nValor de a: %d", a);
    printf("\nValor de a: %d", *ptr + a);
    return 0;
}
