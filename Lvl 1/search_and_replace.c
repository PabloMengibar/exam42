/*
Assignment name  : search_and_replace
Expected files   : search_and_replace.c
Allowed functions: write, exit
--------------------------------------------------------------------------------

Write a program called search_and_replace that takes 3 arguments, the first 
arguments is a string in which to replace a letter (2nd argument) by
another one (3rd argument).

If the number of arguments is not 3, just display a newline.

If the second argument is not contained in the first one (the string)
then the program simply rewrites the string followed by a newline.
*/

#include <unistd.h>
// Función para imprimir un carácter en la salida estándar
void ft_putchar (char c){
	write(1, &c, 1);
}
// Función que busca un carácter y lo reemplaza por otro en una cadena
void search_and_replace(char *s, char *search, char *replace){
	while(*s){
        // Si el carácter actual es igual al que buscamos
		if(*s == *search)
			ft_putchar(*replace);// Imprime el carácter de reemplazo
		else
			ft_putchar(*s);// Si no es el carácter buscado, imprime el carácter actual
		s++;// Avanza al siguiente carácter en la cadena
	}
}

int main(int argc, char **argv)
{
	if(argc == 4)
		search_and_replace(argv[1], argv[2], argv[3]);
	ft_putchar('\n');
	return (0);
}