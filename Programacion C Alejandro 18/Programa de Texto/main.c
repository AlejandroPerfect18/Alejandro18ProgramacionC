#include <stdio.h>
#include <stdlib.h>

// Estructura de ejemplo para almacenar datos

typedef struct
{
    int id;
    char nombre[50];
} Registro;

int main() {
    FILE *archivo;
    Registro *datos = NULL;
    int num_registros, i;

    printf("Ingrese la cantidad de registros a guardar: ");
    scanf("%d", &num_registros);

    // Asignar memoria inicial usando malloc
    datos = (Registro *)malloc(num_registros * sizeof(Registro));

    if (datos == NULL) {
        printf("Error al asignar memoria.");
        return 1;
    }

    // Ingresar datos
    for (i = 0; i < num_registros; i++) {
        printf("Ingrese el ID del registro %d: ", i + 1);
        scanf("%d", &datos[i].id);
        printf("Ingrese el nombre del registro %d: ", i + 1);
        scanf("%s", datos[i].nombre);
    }

    // Abrir archivo en modo escritura
    archivo = fopen("datos.txt", "w");
    if (archivo == NULL) {
        printf("No se pudo abrir el archivo.");
        return 1;
    }

    // Escribir datos en el archivo
    for (i = 0; i < num_registros; i++) {
        fprintf(archivo, "ID: %d, Nombre: %s\n", datos[i].id, datos[i].nombre);
    }

    // Cerrar archivo
    fclose(archivo);

    // Liberar memoria
    free(datos);

    printf("Datos guardados en el archivo 'datos.txt'.\n");

    return 0;
}
