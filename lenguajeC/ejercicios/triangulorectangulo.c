#include <stdio.h>
double base, altura;

double calcularArea()
{
    double area;
    area = (base * altura) / 2;
    return area;
}

int main()
{
    printf("Ingresa la base del triangulo: ");
    scanf("%lf", &base);
    printf("Ingresa la altura del triangulo: ");
    scanf("%lf", &altura);
    printf("Un triangulo rectangulo de altura %f y base %f, tiene un area de %f", altura, base, calcularArea());
    return 0;
}