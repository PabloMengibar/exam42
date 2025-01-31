/*
Assignment name  : ft_atoi
Expected files   : ft_atoi.c
Allowed functions: None
--------------------------------------------------------------------------------

Write a function that converts the string argument str to an integer (type int)
and returns it.

It works much like the standard atoi(const char *str) function, see the man.

Your function must be declared as follows:

int	ft_atoi(const char *str);
*/

int	ft_atoi(const char *str){
	int i = 0;
	int res = 0;
	int sign = 1;
	while(str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if(str[i] == '-'){
		sign = -1;
		i++;
	} else if (str[i] == '+'){
		i++;
	}
	while(str[i]>= 48 && str[i] <= 57){
		res *= 10;
		res += str[i] - 48;
		i++;
	}
	return res * sign;
}

#include <stdio.h>
#include <stdlib.h> 


int main()
{
    // Ejemplos de pruebas
    const char *str1 = "  12345";      // Espacios al principio
    const char *str2 = "-6789";        // Número negativo
    const char *str3 = "  +42";        // Espacios al principio
    const char *str4 = "   001234";    // Con ceros a la izquierda
    const char *str5 = "not a number"; // Caso no numérico

    printf("ft_atoi(\"%s\") = %d\n", str1, ft_atoi(str1));
    printf("atoi(\"%s\") = %d\n\n", str1, atoi(str1));

    printf("ft_atoi(\"%s\") = %d\n", str2, ft_atoi(str2));
    printf("atoi(\"%s\") = %d\n\n", str2, atoi(str2));

    printf("ft_atoi(\"%s\") = %d\n", str3, ft_atoi(str3));
    printf("atoi(\"%s\") = %d\n\n", str3, atoi(str3));

    printf("ft_atoi(\"%s\") = %d\n", str4, ft_atoi(str4));
    printf("atoi(\"%s\") = %d\n\n", str4, atoi(str4));

    printf("ft_atoi(\"%s\") = %d\n", str5, ft_atoi(str5));
    printf("atoi(\"%s\") = %d\n", str5, atoi(str5));

    return 0;
}