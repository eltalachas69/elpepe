#include <stdio.h>
int numeroA = 12;
int numeroB = 10;

/**
 * @brief Calcula la suma de dos numeros
 * @return La suma de los dos numeros enteros
 */
int suma()
{
    return numeroA + numeroB;
}

int main()
{
    printf("%d", suma());
    return 0;
}