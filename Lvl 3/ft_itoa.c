int ft_intlen(int n){
	int len = 0;
	if(n<=0)
		len = 1;
	while(n != 0){
		n = n /10;
		len++;
	}
	return len;
}

char *ft_itoa(int n){
	int len;
	char *str;
	unsigned int num;

	len = ft_intlen(n);
	str = (char *)malloc(len +1);
	if(!str)
		return 0;
	str[len] = 0;
	if(n < 0){
		str[0] = '-';
		num = -n;
	}else
		num = n;
	while(len > 0){
		if(n < 0 && len == 1)
			break ;
		str[len -1] = (num % 10) + '0';
		num = num / 10;
		len --;
	}
	return str;
}