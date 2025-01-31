/*
Assignment name  : alpha_mirror
Expected files   : alpha_mirror.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program called alpha_mirror that takes a string and displays this string
after replacing each alphabetical character by the opposite alphabetical
character, followed by a newline.

'a' becomes 'z', 'Z' becomes 'A'
'd' becomes 'w', 'M' becomes 'N'

and so on.

Case is not changed.

If the number of arguments is not 1, display only a newline.

Examples:

$>./alpha_mirror "abc"
zyx
$>./alpha_mirror "My horse is Amazing." | cat -e
Nb slihv rh Znzarmt.$
$>./alpha_mirror | cat -e
$
$>
*/

#include <unistd.h>
int main(int ac, char **ag){
	int i = 0;
	if(ac ==2){
		while(ag[1][i]){
			if(ag[1][i] >= 'A' && ag[1][i] <= 'Z')
				ag[1][i] = 'A' - ag[1][i] + 'Z';
			else if(ag[1][i] >= 'a' && ag[1][i] <= 'z')
				ag[1][i] = 'a' - ag[1][i] + 'z';
			write(1, &ag[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}