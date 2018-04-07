int zuidagongbeishu(int a,int b)
{
	int c,d;
	int min = a < b ? a:b;
	for(int i = 1;i <= min; i++)
		if(a % i == 0 || b % i == 0)
		{
			c = i;
			d = a * b / c;
		}

	return d;
}