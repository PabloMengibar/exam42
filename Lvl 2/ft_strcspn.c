/*
Assignment name	: ft_strcspn
Expected files	: ft_strcspn.c
Allowed functions: None
---------------------------------------------------------------

Reproduce exactly the behavior of the function strcspn
(man strcspn).

The function should be prototyped as follows:

size_t	ft_strcspn(const char *s, const char *reject);
*/

#include <stdio.h>

size_t	ft_strcspn(const char *s, const char *reject){
	size_t i =0;
	size_t j;

	while(s[i++]){
		j = 0;
		while(reject[j]){
			if(s[i] == reject[j++])
				return i;	
		}
	}
	return i;
}

int main() {
    const char *s = "Hello, world!";
    const char *reject = "woft";

    size_t result = ft_strcspn(s, reject);
    printf("La primera posición en la que un carácter de 'reject' aparece en 's' es: %zu\n", result);

    return 0;
}