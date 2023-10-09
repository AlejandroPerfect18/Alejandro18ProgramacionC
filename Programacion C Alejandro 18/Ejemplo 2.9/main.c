#include <stdio.h>
#include <stdlib.h>

/* Expresión.

El programa, al recibir como datos tres valores enteros, establece si los
➥mismos satisfacen una expresión determinada.

R, T y K: variables de tipo entero.
RES: variable de tipo real. */

void main(void)
{
float RES;
int R, T, K;
printf("Ingrese los valores de R, T y K: ");
scanf("%d %d %d", &R, &T, &K);
RES = pow(R, 4) – pow(T, 3) + 4 pow(K, 2);
if (RES < 820)
          printf("\nR = %d\tT = %d\t K = %d", R, T, K);
}
