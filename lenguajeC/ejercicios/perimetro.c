/**
 * @file perimetro.c
 * @brief Perimetro de un circulo
 *
 * @details Este programa por el momento lo que hace es calcular el perimetro de un circulo
 *
 *
 * @author JC
 * @version 1.0
 * @date 16-06-2026
 */

#include <stdio.h>

// variables globales
#define PI 3.141592
double radio;

/**
 * @brief Calcula el perimetro de un circulo
 *
 * Lo que hace es tomar el radio de un circulo y se calcula
 * multiplicando por PI y por 2
 *
 * @return el perimetro calculado del circulo
 */
double calcularPerimetro()
{
    double perimetro;
    perimetro = (2 * PI * radio);
    return perimetro;
}

int main()
{
    printf("Ingrese el radio del circulo circulo ");
    scanf("%lf", &radio);
    printf("El perimetro del circulo es de %f", calcularPerimetro());
    return 0;
}