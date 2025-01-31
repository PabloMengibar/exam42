void print_bits(unsigned char octet){
	unsigned char mask = 0x80;
	while(mask > 0){
		if(octet & mask)
			printf("1");
		else
			printf("0");
		mask >>=1;

	}
}