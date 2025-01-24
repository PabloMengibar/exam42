/*
Assignment name  : first_word
Expected files   : first_word.c
Allowed functions: write

--------------------------------------------------------------------------------

Write a program that takes a string and displays its first word, followed by a
newline.

A word is a section of string delimited by spaces/tabs or by the start/end of
the string.

If the number of parameters is not 1, or if there are no words, simply display
a newline.

--------------------------------------------------------------------------------
*/

#include <unistd.h> // Incluimos la biblioteca para usar la función write

//Uso de argumentos 
int main (int argc, char **argv){
    int i = 0; // Inicializamos el índice que usaremos para recorrer el argumento
        // Verificamos que se reciba exactamente un argumento adicional (argc == 2)
    if(argc == 2){
        // Primer bucle: Saltar todos los caracteres de espacio o tabulación iniciales
        // `argv[1][i] == 9` verifica si es un tabulador (código ASCII 9)
        // `argv[1][i] == 32` verifica si es un espacio (código ASCII 32)
        while((argv[1][i] == 9) || (argv[1][i] == 32))
            i++;
        // Segundo bucle: Imprimir la primera palabra, carácter por carácter
        // La condición del bucle se asegura de que no imprima espacios, tabulaciones o caracteres nulos:
        // - `(argv[1][i] != 9)` asegura que no sea un tabulador
        // - `(argv[1][i] != 32)` asegura que no sea un espacio
        // - `(argv[1][i])` asegura que no hemos llegado al final de la cadena (`'\0'`)
        while ((argv[1][i] != 9) && (argv[1][i] != 32) && (argv[1][i]))
        {         
            write(1, &argv[1][i], 1);// Escribe el carácter actual en la salida estándar
            i++;// Avanzamos al siguiente carácter
        }
    }
        // Escribimos un salto de línea en la salida estándar, independientemente de la condición inicial
    write(1, "\n", 1);
    return 0; // Indicamos que el programa terminó correctamente
}

//gcc -Wall -Werror -Wextra first_word.c -o first_word
//./first_word "Hello, World!"
