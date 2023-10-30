#include <stdio.h>
#include <stdlib.h>

int main()

{
char cadena [ 20 ];
int mayusculas = 0;
int minusculas = 0;

printf( "ingrese una cadena de texto:");
fgets( cadena, sizeof(cadena),stdin);

for (int i = 0; cadena[i] != '\0'; i++)

{
    if (isupper (cadena [i]))
    {
        mayusculas++;
    }
    else if (islower(cadena [i]))
    {
        minusculas++;
    }

 }
 printf("Mayuscula:%d\n",mayusculas);
 printf("Minusculas:%d\n",minusculas);

return 0;
 }

