#include <stdio.h>

int main() {
    // Declaración de una matriz bidimensional de enteros de 3x3
    int matriz[3][3];

    // Inicialización de la matriz
    matriz[0][0] = 1;
    matriz[0][1] = 2;
    matriz[0][2] = 3;
    matriz[1][0] = 4;
    matriz[1][1] = 5;
    matriz[1][2] = 6;
    matriz[2][0] = 7;
    matriz[2][1] = 8;
    matriz[2][2] = 9;

    // Acceso a elementos de la matriz
    int fila = 1;
    int columna = 2;
    int valor = matriz[fila][columna];
    printf("El valor en la fila %d, columna %d es: %d\n", fila, columna, valor);

    // Recorriendo la matriz con bucles
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
