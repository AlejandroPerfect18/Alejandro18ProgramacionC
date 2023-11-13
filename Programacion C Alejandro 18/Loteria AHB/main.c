#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Funci�n para tirar la loter�a
void tirarLoteria(int *numeros) {
    for (int i = 0; i < 6; i++) {
        numeros[i] = rand() % 99 + 0;  // Genera n�meros aleatorios del 0 al 99
    }
}

// Funci�n para imprimir los n�meros de la loter�a
void imprimirLoteria(int *numeros) {
    printf("N�meros de la loter�a: ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");
}

int main() {
    int opcion;
    int numeros[6];

    // Inicializar la semilla para los n�meros aleatorios
    srand(time(NULL));

    do {
        // Men�
        printf("Men� de loter�a:\n");
        printf("0 - Salir\n");
        printf("1 - Tirar loter�a\n");
        printf("2 - Imprimir loter�a\n");
        printf("Ingrese su opci�n: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 0:
                printf("Saliendo del programa. �Hasta luego!\n");
                break;
            case 1:
                tirarLoteria(numeros);
                printf("Loter�a tirada correctamente.\n");
                break;
            case 2:
                imprimirLoteria(numeros);
                break;
            default:
                printf("Opci�n no v�lida. Por favor, elija una opci�n v�lida.\n");
        }
    } while (opcion != 0);

    return 0;
}

