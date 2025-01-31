/*
Assignment name	: ft_strspn
Expected files	: ft_strspn.c
Allowed functions: None
---------------------------------------------------------------

Reproduce exactly the behavior of the strspn function 
(man strspn).

The function should be prototyped as follows:

size_t	ft_strspn(const char *s, const char *accept);
*/

#include <stdio.h>
size_t	ft_strspn(const char *s, const char *accept){
	int i = 0;
	int j;
	int check;
	while(s[i]){
		j = 0;
		check = 0;
		while(accept[j]){
			if(s[i] == accept[j])
				check = 1;
			j++;
		}
		if(check == 0)
			return i;
		i++;
	}
	return i;
}

#include <string.h>

int main() {
    const char *s = "abcdef123";
    const char *accept = "fghfgabdfdc";

    size_t result = strspn(s, accept);
    printf("La longitud del prefijo válido es: %zu\n", result);

    return 0;
}