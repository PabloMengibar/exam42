/*
Assignment name  : rotone
Expected files   : rotone.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays it, replacing each of its
letters by the next one in alphabetical order.

'z' becomes 'a' and 'Z' becomes 'A'. Case remains unaffected.

The output will be followed by a \n.

If the number of arguments is not 1, the program displays \n.
*/

#include <unistd.h>

// Función para escribir un solo carácter en la salida estándar
void ft_putchar(char c)
{
    write(1, &c, 1);
}
// Función para aplicar el cifrado ROT1 a una cadena de caracteres
void rotone (char *str)
{
    while (*str)
    {
		// Si el carácter está entre 'a' y 'y' o entre 'A' y 'Y'
        if ((*str >= 'a' && *str < 'z') || (*str >= 'A' && *str < 'Z'))
            ft_putchar(*str + 1); // Imprime el siguiente carácter en la secuencia (ROT1)
		// Si el carácter es 'z' o 'Z'
        else if (*str == 'z' || *str == 'Z')
            ft_putchar(*str - 25); // Para 'z' o 'Z', pasa a 'a' o 'A' (es el caso especial)
        else
            ft_putchar(*str); // Si no es una letra (espacios, signos, etc.), lo imprime tal cual
        str++; // Avanza al siguiente carácter en la cadena
    }
}

int main(int argc, char **argv)
{
    if (argc == 2)
        rotone(argv[1]);
    ft_putchar('\n');
    return (0);
}