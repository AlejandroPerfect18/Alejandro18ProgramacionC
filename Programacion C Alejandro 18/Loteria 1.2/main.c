#include <stdio.h>
#include <stdlib.h>  // Necesario para la funci�n rand() y srand()
#include <time.h>    // Necesario para la funci�n time()

void tirar() {
    printf("�Has elegido tirar!\n");

    int opcionNumeros;
    printf("�Deseas ingresar tus propios n�meros o generar aleatorios?\n");
    printf("1. Ingresar n�meros\n");
    printf("2. Generar n�meros aleatorios\n");
    printf("Seleccione una opci�n: ");
    scanf("%d", &opcionNumeros);

    int numeros[3];

    if (opcionNumeros == 1) {
        // Permitir al usuario ingresar tres n�meros
        for (int i = 0; i < 3; ++i) {
            printf("Ingrese el n�mero %d: ", i + 1);
            scanf("%d", &numeros[i]);
        }
    } else if (opcionNumeros == 2) {
        // Configurar la semilla para la generaci�n de n�meros aleatorios
        srand(time(NULL));

        // Generar tres n�meros aleatorios y almacenarlos en el array
        for (int i = 0; i < 3; ++i) {
            numeros[i] = rand() % 10;  // Generar n�meros entre 0 y 9
        }
    } else {
        printf("Opci�n no v�lida. Volviendo al men� principal.\n");
        return;
    }

    // Mostrar los n�meros ingresados o generados
    printf("N�meros seleccionados: ");
    for (int i = 0; i < 3; ++i) {
        printf("%d ", numeros[i]);
    }
    printf("\n");
}

void imprimir() {
    printf("�Has seleccionado imprimir!\n");
}

int main() {
    int opcion;

    do {
        // Mostrar el men�
        printf("----- Men� -----\n");
        printf("1. Tirar\n");
        printf("2. Imprimir\n");
        printf("0. Salir\n");
        printf("Seleccione una opci�n: ");
        scanf("%d", &opcion);

        // Realizar acciones seg�n la opci�n seleccionada
        switch (opcion) {
            case 1:
                tirar();
                break;
            case 2:
                imprimir();
                break;
            case 0:
                printf("Saliendo del programa. �Hasta luego!\n");
                break;
            default:
                printf("Opci�n no v�lida. Intente de nuevo.\n");
        }

    } while (opcion != 0);

    return 0;
}
