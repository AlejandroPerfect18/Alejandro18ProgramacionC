#include <stdio.h>

/*Lamzamiento de martillo.
El programa, al recibir como dato N lanzamiento de martill, calcula el promedio
➥ de los lanzamientos de la atleta cubana.

I , N: variables de tipo entero.
LAN , SLA: variables de tipo real.*/

void main (void)
{
int I, N;
float LAN ,SLA = 0;
do
{
    printf("Ingrese el numero de lamzamientos:\t");
    scanf("%d" , &N);
}
while (N < 1 || N > 11);
/* Se utiliza la estructura do-while para verificar que el valor de N sea
➥ correcto. */

for(I = 1 ; I<=N; I++)

{
    printf("\nIngrese el lamzamiento %d:" , I );
    scanf ("%d" , &LAN);
    SLA = SLA + LAN;

}
SLA = SLA / N;
printf("\nEl promedio de lanzamientos es:%.2f", SLA);
}
