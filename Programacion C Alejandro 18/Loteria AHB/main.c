#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Función para tirar la lotería
void tirarLoteria(int *numeros) {
    for (int i = 0; i < 6; i++) {
        numeros[i] = rand() % 99 + 0;  // Genera números aleatorios del 0 al 99
    }
}

// Función para imprimir los números de la lotería
void imprimirLoteria(int *numeros) {
    printf("Números de la lotería: ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");
}

int main() {
    int opcion;
    int numeros[6];

    // Inicializar la semilla para los números aleatorios
    srand(time(NULL));

    do {
        // Menú
        printf("Menú de lotería:\n");
        printf("0 - Salir\n");
        printf("1 - Tirar lotería\n");
        printf("2 - Imprimir lotería\n");
        printf("Ingrese su opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 0:
                printf("Saliendo del programa. ¡Hasta luego!\n");
                break;
            case 1:
                tirarLoteria(numeros);
                printf("Lotería tirada correctamente.\n");
                break;
            case 2:
                imprimirLoteria(numeros);
                break;
            default:
                printf("Opción no válida. Por favor, elija una opción válida.\n");
        }
    } while (opcion != 0);

    return 0;
}

