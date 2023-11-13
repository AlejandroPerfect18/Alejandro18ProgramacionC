#include <stdio.h>
#include <stdlib.h>  // Necesario para la función rand() y srand()
#include <time.h>    // Necesario para la función time()

void tirar() {
    printf("¡Has elegido tirar!\n");

    int opcionNumeros;
    printf("¿Deseas ingresar tus propios números o generar aleatorios?\n");
    printf("1. Ingresar números\n");
    printf("2. Generar números aleatorios\n");
    printf("Seleccione una opción: ");
    scanf("%d", &opcionNumeros);

    int numeros[3];

    if (opcionNumeros == 1) {
        // Permitir al usuario ingresar tres números
        for (int i = 0; i < 3; ++i) {
            printf("Ingrese el número %d: ", i + 1);
            scanf("%d", &numeros[i]);
        }
    } else if (opcionNumeros == 2) {
        // Configurar la semilla para la generación de números aleatorios
        srand(time(NULL));

        // Generar tres números aleatorios y almacenarlos en el array
        for (int i = 0; i < 3; ++i) {
            numeros[i] = rand() % 10;  // Generar números entre 0 y 9
        }
    } else {
        printf("Opción no válida. Volviendo al menú principal.\n");
        return;
    }

    // Mostrar los números ingresados o generados
    printf("Números seleccionados: ");
    for (int i = 0; i < 3; ++i) {
        printf("%d ", numeros[i]);
    }
    printf("\n");
}

void imprimir() {
    printf("¡Has seleccionado imprimir!\n");
}

int main() {
    int opcion;

    do {
        // Mostrar el menú
        printf("----- Menú -----\n");
        printf("1. Tirar\n");
        printf("2. Imprimir\n");
        printf("0. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        // Realizar acciones según la opción seleccionada
        switch (opcion) {
            case 1:
                tirar();
                break;
            case 2:
                imprimir();
                break;
            case 0:
                printf("Saliendo del programa. ¡Hasta luego!\n");
                break;
            default:
                printf("Opción no válida. Intente de nuevo.\n");
        }

    } while (opcion != 0);

    return 0;
}
