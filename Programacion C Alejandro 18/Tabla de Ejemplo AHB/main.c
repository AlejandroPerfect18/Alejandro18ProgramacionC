#include <stdio.h>
#include <string.h>

#define MAX_EQUIPOS 3
#define MAX_NOMBRE_ARCHIVO 50

int main() {
    char equipos[MAX_EQUIPOS][MAX_NOMBRE_ARCHIVO];
    char nombreArchivo[MAX_NOMBRE_ARCHIVO];

    // Inicializar la tabla de equipos
    strcpy(equipos[0], "Mets");
    strcpy(equipos[1], "Reds");
    strcpy(equipos[2], "Piratas");

    // Pedir al usuario que ingrese el nombre del archivo
    printf("Ingresa el nombre del archivo: ");
    scanf("%s", nombreArchivo);

    // Guardar el nombre del archivo en disco duro
    FILE *archivo = fopen(nombreArchivo, "w");
    if (archivo == NULL) {
        printf("No se pudo abrir el archivo.\n");
        return 1;
    }

    for (int i = 0; i < MAX_EQUIPOS; i++) {
        fprintf(archivo, "%s\n", equipos[i]);
    }

    fclose(archivo);
    printf("Nombre de archivo guardado exitosamente.\n");

    // Leer el nombre del archivo desde el disco duro
    archivo = fopen(nombreArchivo, "r");
    if (archivo == NULL) {
        printf("No se pudo abrir el archivo para lectura.\n");
        return 1;
    }

    printf("Equipos de la MLB:\n");
    for (int i = 0; i < MAX_EQUIPOS; i++) {
        fscanf(archivo, "%s", equipos[i]);
        printf("%s\n", equipos[i]);
    }

    fclose(archivo);

    return 0;
}
