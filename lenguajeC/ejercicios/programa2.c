#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Ingrese el valor de 'a': ");
    scanf("%d", &a);
    printf("Ingrese el valor de 'b': ");
    scanf("%d", &b);
    printf("Ingrese el valor de 'c': ");
    scanf("%d", &c);
    int suma = a + b + c;
    printf("La suma de %d, %d, %d es de %d", a, b, c, suma);
    return 0;
}