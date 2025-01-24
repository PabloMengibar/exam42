/*
Assignment name  : fizzbuzz
Expected files   : fizzbuzz.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that prints the numbers from 1 to 100, each separated by a
newline.

If the number is a multiple of 3, it prints 'fizz' instead.

If the number is a multiple of 5, it prints 'buzz' instead.

If the number is both
*/
#include <unistd.h>// Incluimos la biblioteca para usar la función write
// Función para escribir un número entero en la salida estándar
void ft_write_number(int n){
	char c;
	// Si el número es mayor o igual a 10, escribimos los dígitos superiores primero
	if(n >= 10){
		ft_write_number(n/10);// Llamada recursiva con el cociente de dividir entre 10
	}
	// Calculamos el dígito actual (resto de dividir entre 10) y lo convertimos a carácter
	c = n % 10 +'0';
	// Escribimos el carácter en la salida estándar
	write(1, &c, 1);
}

int main()
{
    int i;

    i = 1;
	// Bucle para iterar desde 1 hasta 100
    while (i <= 100)
    {
        // Si el número es divisible por 15 (múltiplo de 3 y 5), escribimos "fizzbuzz"
        if (i % 15 == 0)
            write (1, "fizzbuzz",8);
        // Si el número es divisible por 5, escribimos "buzz"
        else if (i % 5 == 0)
            write (1, "buzz", 4);
        // Si el número es divisible por 3, escribimos "fizz"
        else if (i % 3 == 0)
            write (1, "fizz", 4);
        // Si no es divisible ni por 3 ni por 5, escribimos el número
        else
            ft_write_number(i);
        i++;
        write (1, "\n", 1);
    }
    return(0);
}
