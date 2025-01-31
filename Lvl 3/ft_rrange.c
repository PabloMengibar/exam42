int *ft_rrange(int start, int end){
	int *res;
	int i = 0;
	int step = 1;
	int n = end - start;
	if(n < 0)
		(n = n * 1);
	n++;
	res = (int *)malloc(sizeof(int) * n);
	if(res){
		if(start < end){
			step = -1;
		}
		while(i < n){
			res[i] = end;
			end = end + step;
			i++;
		}
	}
	return res;
}