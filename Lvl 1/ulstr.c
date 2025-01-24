/*
Assignment name  : ulstr
Expected files   : ulstr.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and reverses the case of all its letters.
Other characters remain unchanged.

You must display the result followed by a '\n'.

If the number of arguments is not 1, the program displays '\n'.
*/

#include <unistd.h>

int main(int argc, char **argv)
{
    int i;

    i = 0;
    if (argc > 1)
    {
        while (argv[1][i] != '\0')// Cambié '0' por '\0' para verificar el fin de la cadena
        {
            // Si el carácter es una letra minúscula, la convierte a mayúscula
            if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
                argv[1][i] -= 32;
            // Si el carácter es una letra mayúscula, la convierte a minúscula
            else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
                argv[1][i] += 32;
            // Escribe el carácter modificado o original en la salida estándar
            write (1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
}