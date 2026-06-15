/*
 * Escribe una función que reciba dos palabras (String) y retorne
 * verdadero o falso (Bool) según sean o no anagramas.
 * - Un Anagrama consiste en formar una palabra reordenando TODAS
 *   las letras de otra palabra inicial.
 * - NO hace falta comprobar que ambas palabras existan.
 * - Dos palabras exactamente iguales no son anagrama.
 */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool esAnagrama(char palabra1[50], char palabra2[50])
{
    int ascii[256] = {0};

    // cambiar de letras de mayores a menores
    for (int posLetra = 0; palabra1[posLetra] != '\0')
    {
    }
}

int main()
{
    // agarro las letras de las dos palabras
    char palabra1[50], palabra2[50];

    // le pido al usuario que me escriba las dos palabras
    printf("Dame la primera palabra\n");
    scanf("%s", &palabra1);
    printf("\nDame la segunda palabra\n");
    scanf("%s", &palabra2);

    printf("%s %s", palabra1, palabra2);

    // comparacion de tamaño
    if (strlen(palabra1) != strlen(palabra2))
    { // tienen diferente tamaño
        return false;
    }
    else
    { // si tienen mismo tamaño
    }
}