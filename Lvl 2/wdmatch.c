/*
Assignment name  : wdmatch
Expected files   : wdmatch.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and checks whether it's possible to
write the first string with characters from the second string, while respecting
the order in which these characters appear in the second string.

If it's possible, the program displays the string, followed by a \n, otherwise
it simply displays a \n.

If the number of arguments is not 2, the program displays a \n.

Examples:

$>./wdmatch "faya" "fgvvfdxcacpolhyghbreda" | cat -e
faya$
$>./wdmatch "faya" "fgvvfdxcacpolhyghbred" | cat -e
$
$>./wdmatch "quarante deux" "qfqfsudf arzgsayns tsregfdgs sjytdekuoixq " | cat -e
quarante deux$
$>./wdmatch "error" rrerrrfiiljdfxjyuifrrvcoojh | cat -e
$
$>./wdmatch | cat -e
$
*/

void ft_putstr(char *str){
	while(*str){
		write(1, str, 1);
		str++;
	}
}

int wdmatch(char *s1, char *s2){
	while(*s1 && *s2){
		if(*s1 == *s2)
			s1++;
		s2++;
	}
	return (!*s1);
}

int main(int ac, char **ag){
	if (ac == 3){
		if(wdmatch(ag[1], ag[2]))
			ft_putstr(ag[1]);
	}
	write(1, "\n", 1);
	return 0;
}