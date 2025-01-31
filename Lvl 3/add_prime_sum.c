int ft_atoi(char *s){
	int res = 0;
	while(*s)
		res = (res * 10) + (*s++ - '0');
	return res;
}
int is_prime(int n){
	int i = 2;
	if (n<= 1)
		return 0;
	while(i * i <= n){
		if(n%i == 0)
			return 0;
		i++;
	}
	return i;
}

void put_nbr(int n){
char c;
if(n>= 10)
	put_nbr(n/ 10);
c = n % 10 + '0';
write(1, &c, 1);
}

int main (int ac, char **ag){
	if(ac == 2){
		int n;
		int sum;
		n = ft_atoi(ag[1]);
		sum = 0;
		while(n > 0){
			if(is_prime(n))
				sum += n;
			n--;
		}
		put_nbr(sum);
	}
	if(ac != 2)
		put_nbr(0);
	write(1,"\n",1);
	return 0;
}