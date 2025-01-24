/*
Assignment name  : rot_13
Expected files   : rot_13.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays it, replacing each of its
letters by the letter 13 spaces ahead in alphabetical order.

'z' becomes 'm' and 'Z' becomes 'M'. Case remains unaffected.

The output will be followed by a newline.

If the number of arguments is not 1, the program displays a newline.
*/
#include <unistd.h>

int main(int argc, char **argv){
	int i = 0;

	if(argc > 1){
		while(argv[1][i]){
			// Si el carácter es una letra minúscula ('a' a 'z')
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			// Aplicamos ROT13: desplazamos la letra 13 lugares en el alfabeto
				argv[1][i] = (argv[1][i] - 'a' + 13) % 26 + 'a';
			// Si el carácter es una letra mayúscula ('A' a 'Z')
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			// Aplicamos ROT13 para mayúsculas de manera similar
                argv[1][i] = (argv[1][i] - 'A' + 13) % 26 + 'A';
			write(1, &argv[1][i], 1);
			i++;
		}
    write(1, "\n", 1);
    return (0);
	}
}

// gcc -Wall -Wextra -Werror rot_13.c -o rot_13 
//./rot_13 "Hello, World!"