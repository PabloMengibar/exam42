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

Example:

$>./rot_13 "abc"
nop
$>./rot_13 "My horse is Amazing." | cat -e
Zl ubefr vf Nznmvat.$
$>./rot_13 "AkjhZ zLKIJz , 23y " | cat -e
NxwuM mYXVWm , 23l $
$>./rot_13 | cat -e
$
$>
$>./rot_13 "" | cat -e
$
$>
*/

#include <unistd.h>

int main(int ac, char **ag){
	int i = 0;
	if(ac == 2){
		while(ag[1][i]){
			if((ag[1][i]>= 'A' && ag[1][i] <= 'M') || (ag[1][i] >= 'a' && ag[1][i] <= 'm'))
				ag[1][i] += 13;
			else if((ag[1][i]>= 'N' && ag[1][i] <= 'Z') || (ag[1][i] >= 'n' && ag[1][i] <= 'z'))
				ag[1][i] -= 13;
			write(1, &ag[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}