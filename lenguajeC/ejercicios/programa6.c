#include <stdio.h>

int main()
{
    for (int numero = 10; numero <= 56; numero++)
    {
        if (numero % 2 == 0 && numero != 16 && numero % 3 != 0)
        {
            printf("%d\n", numero);
        }
    }
    return 0;
}