/*
Assignment name  : repeat_alpha
Expected files   : repeat_alpha.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program called repeat_alpha that takes a string and display it
repeating each alphabetical character as many times as its alphabetical index,
followed by a newline.

'a' becomes 'a', 'b' becomes 'bb', 'e' becomes 'eeeee', etc...

Case remains unchanged.

If the number of arguments is not 1, just display a newline.
*/
#include <unistd.h>

// Función que imprime un carácter `c` repetido `n` veces
void ft_putchar(char c, int n){
	while (n > 0){
		write(1, &c, 1);
		n--;
	}
}
// Función que repite cada letra en base a su posición en el alfabeto
void ft_repeat_alpha(char *s){
	while(*s){
		// Si el carácter es una letra minúscula ('a' - 'z')
		if(*s >= 'a' && *s <= 'z')
			ft_putchar(*s, *s -'a' + 1);
		// Si el carácter es una letra mayúscula ('A' - 'Z')
		else if (*s >= 'A' && *s <= 'Z')
			ft_putchar(*s, *s - 'A' + 1);
		else
			write(1, s, 1);
		s++;
	}
}

int main(int argc, char **argv)
{
    if (argc == 2)
        ft_repeat_alpha(argv[1]);
    write(1, "\n", 1);
    return (0);
}

//Si el carácter es una letra minúscula ('a' a 'z'), calcula su posición en el alfabeto como *s - 'a' + 1 y lo repite esa cantidad de veces.
// el primer *s apuntamos al puntero es decir el caracter actual de la cadena
/*
*s - 'A' + 1:
Esta operación calcula la posición de la letra mayúscula actual en el alfabeto.
	A' tiene el valor ASCII 65. Si *s es 'A', entonces:
    	*s - 'A' será 0 (posición de 'A').
    	Al sumar 1, obtenemos la posición de 'A' en el alfabeto: 1.
    Si *s es 'B' (ASCII 66):
        *s - 'A' será 1, y al sumar 1, obtenemos 2.
*/
/*
Si el carácter actual es 'H', los valores que se pasarían a la función ft_putchar serían:

Primer parámetro (c):
    *s = 'H' (el carácter actual en la cadena).
Segundo parámetro (n):
    *s - 'A' + 1:
        ASCII de 'H' = 72.
        ASCII de 'A' = 65.
        Cálculo: 72 - 65 + 1 = 8 (posición de 'H' en el alfabeto).
*/