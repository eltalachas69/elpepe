#include <stdio.h>

int main()
{
    for (int numero = 1; numero <= 100; numero++)
    {
        // esto es para cuando es de 3 y 5
        if ((numero % 3) == 0 && numero % 5 == 0)
        {
            char multiplo53[] = "fizzbuzz";
            printf("%d %s\n", numero, multiplo53);
        }
        else if (numero % 5 == 0) // cuando es 5
        {
            char multiplo5[] = "buzz";
            printf("%d %s\n", numero, multiplo5);
        }
        else if (numero % 3 == 0) // cuando es 3
        {
            char multiplo3[] = "fizz";
            printf("%d %s\n", numero, multiplo3);
        }
        else
        {
            printf("%d\n", numero);
        }
    }
    return 0;
}