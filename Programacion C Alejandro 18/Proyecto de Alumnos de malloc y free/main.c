#include <stdio.h>
#include <stdlib.h>


// Definición de la estructura para representar un estudiante
struct Estudiante {
    int id;
    char nombre[50];
    char direccion[100];
    char carrera[50];
    int matricula;
    float promedio;
    int edad;
};

int main() {
    // Crear un puntero a una estructura de estudiante
    struct Estudiante *estudiante;

    // Asignar memoria dinámica para el estudiante
    estudiante = (struct Estudiante *)malloc(sizeof(struct Estudiante));

    // Verificar si se asignó correctamente la memoria
    if (estudiante == NULL) {
        printf("Error al asignar memoria.");
        return -1;
    }

    // Inicializar los datos del estudiante
    estudiante->id = 1;
    strcpy(estudiante->nombre, "Juan");
    strcpy(estudiante->direccion, "Calle Principal #123");
    strcpy(estudiante->carrera, "Ingeniería Informática");
    estudiante->matricula = 2023001;
    estudiante->promedio = 85.5;
    estudiante->edad = 20;

    // Mostrar los datos del estudiante
    printf("Datos del estudiante:\n");
    printf("ID: %d\n", estudiante->id);
    printf("Nombre: %s\n", estudiante->nombre);
    printf("Dirección: %s\n", estudiante->direccion);
    printf("Carrera: %s\n", estudiante->carrera);
    printf("Matrícula: %d\n", estudiante->matricula);
    printf("Promedio: %.2f\n", estudiante->promedio);
    printf("Edad: %d\n", estudiante->edad);

    // Liberar la memoria asignada para el estudiante
    free(estudiante);

    return 0;
}
