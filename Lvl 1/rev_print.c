/*
Assignment name  : rev_print
Expected files   : rev_print.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string, and displays the string in reverse
followed by a newline.

If the number of parameters is not 1, the program displays a newline.
*/
#include <unistd.h>

// Función para imprimir una cadena en orden inverso
void rev_print(char *s){
	int i = 0;
	// Primer bucle: calcular la longitud de la cadena
	while(s[i]) // Mientras no lleguemos al carácter nulo ('\0'), avanzamos
		i++;
	i--; // Retrocedemos una posición para apuntar al último carácter de la cadena
	while(i >= 0){
		write(1, &s[i], 1);
		i--;
	}
}

int main (int argc, char **argv)
{
    if (argc == 2)
        rev_print(argv[1]);
    write(1, "\n", 1);
    return (0);    
}

//gcc -Wall -Werror -Wextra rev_print.c -o rev_print
//./rev_print "Hello, World!"
/*
El operador & se utiliza para obtener la dirección de memoria de una variable. 
Esto es útil cuando queremos trabajar con punteros o pasar la dirección de una variable a una función que espera un puntero.
*/