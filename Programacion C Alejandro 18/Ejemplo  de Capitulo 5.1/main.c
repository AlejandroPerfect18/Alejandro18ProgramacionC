#include <stdio.h>
#define Cat 10

/*Cuenta-numeros.
El programa, al recibir como datos un arreglo unidimecional de tipo
➥entero y un número entero, determina cuántas veces se encuentra el
➥número en el arreglo. */

void main(void)
{
int I, NUM,CUE =0;
int ARRE[Cat];                 /* Declaración del arreglo */
for (I=0; I<Cat; I++)
{
    printf("Ingrese el elemento %d del arreglo:",I+1);
    scanf("%d",&ARRE[I]);            /*Lectura  -asignatura — del arreglo */
}
printf("\n\nIngrese el número que se va a buscar en el arreglo: ");
scanf("%d" , & NUM);
for(I=0; I<Cat;I++)
    if(ARRE[I] == NUM) /* Comparación del número con los elementos del
    ➥arreglo */
    CUE++;
printf("\n\nEl %d se encuentra %d veces en el arreglo", NUM, CUE);
}

