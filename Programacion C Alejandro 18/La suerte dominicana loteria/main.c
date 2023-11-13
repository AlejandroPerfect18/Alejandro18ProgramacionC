#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_TIRADAS 100

typedef struct {
    int numero;
    time_t fecha;
} Tirada;

Tirada historial[MAX_TIRADAS];
int numTiradas = 0;

void obtenerFechaYHora(char *cadenaFecha, int longitud, time_t fecha) {
    struct tm *infoFecha;
    infoFecha = localtime(&fecha);
    strftime(cadenaFecha, longitud, "%Y-%m-%d %H:%M:%S", infoFecha);
}

void jugarNumero() {
    srand(time(NULL));

    int apuesta;
    printf("Ingrese la cantidad que desea apostar para jugar a número: ");
    scanf("%d", &apuesta);

    if (apuesta <= 0) {
        printf("La apuesta debe ser mayor que cero. Intenta de nuevo.\n");
        return;
    }

    int numeroGanador = rand() % 100;

    // Almacenar la tirada en el historial
    historial[numTiradas].numero = numeroGanador;
    historial[numTiradas].fecha = time(NULL);
    numTiradas++;

    printf("¡Has jugado a número con una apuesta de %d! El número ganador es: %d\n", apuesta, numeroGanador);

    if (numeroGanador == apuesta) {
        printf("¡Felicidades! Has ganado %d veces tu apuesta.\n", apuesta);
    } else {
        printf("Lo siento, has perdido tu apuesta.\n");
    }
}

void jugarPale() {
    srand(time(NULL));

    int apuesta;
    printf("Ingrese la cantidad que desea apostar para jugar a pale: ");
    scanf("%d", &apuesta);

    if (apuesta <= 0) {
        printf("La apuesta debe ser mayor que cero. Intenta de nuevo.\n");
        return;
    }

    int digito1 = rand() % 10;
    int digito2 = rand() % 10;
    int resultadoPale = digito1 * 10 + digito2;

    // Almacenar la tirada en el historial
    historial[numTiradas].numero = resultadoPale;
    historial[numTiradas].fecha = time(NULL);
    numTiradas++;

    printf("¡Has jugado a pale con una apuesta de %d! El resultado es: %02d\n", apuesta, resultadoPale);

    if (resultadoPale == apuesta) {
        printf("¡Felicidades! Has ganado %d veces tu apuesta.\n", apuesta);
    } else {
        printf("Lo siento, has perdido tu apuesta.\n");
    }
}

void jugarTripleta() {
    srand(time(NULL));

    int apuesta;
    printf("Ingrese la cantidad que desea apostar para jugar a tripleta: ");
    scanf("%d", &apuesta);

    if (apuesta <= 0) {
        printf("La apuesta debe ser mayor que cero. Intenta de nuevo.\n");
        return;
    }

    int resultadoTripleta = rand() % 1000;

    // Almacenar la tirada en el historial
    historial[numTiradas].numero = resultadoTripleta;
    historial[numTiradas].fecha = time(NULL);
    numTiradas++;

    printf("¡Has jugado a tripleta con una apuesta de %d! El resultado es: %03d\n", apuesta, resultadoTripleta);

    if (resultadoTripleta == apuesta) {
        printf("¡Felicidades! Has ganado %d veces tu apuesta.\n", apuesta);
    } else {
        printf("Lo siento, has perdido tu apuesta.\n");
    }
}

void mostrarHistorial() {
    printf("\nHistorial de tiradas (últimas tres):\n");
    int inicio = (numTiradas > 2) ? numTiradas - 3 : 0;

    for (int i = inicio; i < numTiradas; i++) {
        char cadenaFecha[20];
        obtenerFechaYHora(cadenaFecha, sizeof(cadenaFecha), historial[i].fecha);
        printf("Tirada %d: Número %d - Fecha y Hora: %s\n", i + 1, historial[i].numero, cadenaFecha);
    }
}

void revisarJugada() {
    if (numTiradas == 0) {
        printf("Aún no has jugado ninguna vez.\n");
        return;
    }

    int tirada;
    printf("Ingresa el número de la tirada que quieres revisar: ");
    scanf("%d", &tirada);

    if (tirada < 1 || tirada > numTiradas) {
        printf("Tirada no válida.\n");
    } else {
        char cadenaFecha[20];
        obtenerFechaYHora(cadenaFecha, sizeof(cadenaFecha), historial[tirada - 1].fecha);

        printf("En la tirada %d, el resultado fue: %d - Fecha y Hora: %s\n", tirada, historial[tirada - 1].numero, cadenaFecha);
    }
}

void cerrarLoteria() {
    int totalApostado = 0;
    int totalGanado = 0;

    for (int i = 0; i < numTiradas; i++) {
        totalApostado += historial[i].numero;
        totalGanado += historial[i].numero;
    }

    printf("\nResumen de la lotería:\n");
    printf("Has jugado un total de %d en la lotería.\n", totalApostado);

    if (totalGanado > totalApostado) {
        printf("¡Felicidades! Has ganado %d en total.\n", totalGanado - totalApostado);
    } else if (totalGanado < totalApostado) {
        printf("Lo siento, has perdido %d en total.\n", totalApostado - totalGanado);
    } else {
        printf("No has ganado ni perdido dinero en total.\n");
    }

    printf("La lotería ha sido cerrada. Gracias por jugar.\n");
    exit(0);
}

void borrarHistorial() {
    numTiradas = 0;
    printf("Historial borrado.\n");
}

int main() {
    int opcion;

    printf("¡Bienvenido a la Lotería Dominicana!\n");

    do {
        printf("\nMenú:\n");
        printf("1. Jugar a número\n");
        printf("2. Jugar a pale\n");
        printf("3. Jugar a tripleta\n");
        printf("4. Historial de tiradas\n");
        printf("5. Revisar jugada\n");
        printf("6. Cerrar lotería\n");
        printf("7. Borrar historial\n");
        printf("8. Salir\n");
        printf("Elige una opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                jugarNumero();
                break;
            case 2:
                jugarPale();
                break;
            case 3:
                jugarTripleta();
                break;
            case 4:
                mostrarHistorial();
                break;
            case 5:
                revisarJugada();
                break;
            case 6:
                cerrarLoteria();
                break;
            case 7:
                borrarHistorial();
                break;
            case 8:
                printf("¡Gracias por jugar a la Lotería Dominicana! ¡Hasta luego!\n");
                break;
            default:
                printf("Opción no válida. Inténtalo de nuevo.\n");
        }
    } while (opcion != 8);

    return 0;
}
