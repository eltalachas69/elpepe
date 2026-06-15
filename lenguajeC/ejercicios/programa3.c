#include <stdio.h>

int main()
{
    int capital;
    int porcentaje;
    float porcentajeConvertido;
    float ganancia;

    printf("Diga la capital que tiene: ");
    scanf("%d", &capital);
    printf("Diga el interes: ");
    scanf("%d", &porcentaje);
    porcentajeConvertido = (float)porcentaje / 100;
    ganancia = capital * porcentajeConvertido;

    printf("La ganancia obtenida por el interes es de %.2f", ganancia);
    return 0;
}