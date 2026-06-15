#include <stdio.h>

const int añoActual = 2026;
int añoNacimiento;

int edad()
{
    int edadActual = añoActual - añoNacimiento;
    return edadActual;
}

int main()
{
    printf("Hola\nPor favor introduzca el año que nacio: ");
    scanf("%d", &añoNacimiento);
    printf("Si usted nacio en %d, este año cumple %d", añoNacimiento, edad());
    return 0;
}