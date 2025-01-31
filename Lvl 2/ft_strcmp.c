/*
STRCMP(3) (simplified)

NAME
    strcmp -- compare strings
SYNOPSIS
    #include <string.h>
    int strcmp(const char *s1, const char *s2);
DESCRIPTION
    The strcmp() and strncmp() functions lexicographically compare the null-
terminated strings s1 and s2.
RETURN VALUES
     The strcmp() and strncmp() functions return an integer greater than,
 equal to, or less than 0, according as the string s1 is greater than,
 equal to, or less than the string s2.  The comparison is done using
 unsigned characters, so that ‘\200’ is greater than ‘\0’.
*/
#include <string.h>
int strcmp(const char *s1, const char *s2){
	int i = 0;
	while((s1[i] || s2[i]) && s1[i] == s2[i])
		i++;
	return (s1[i]- s2[i]);
}

#include <stdio.h>

int main() {
    const char *str1 = "Hola Mundo";
    const char *str2 = "Hola Mondo";
    int result = strcmp(str1, str2);
    if (result == 0)
        printf("'%s' y '%s' son iguales.\n", str1, str2);
    else
        printf("'%s' y '%s' son diferentes.\n", str1, str2);
    return 0;
}