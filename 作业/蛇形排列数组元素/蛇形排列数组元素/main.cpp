//蛇形排列数组元素
//Hui Li,December 15,2015
# include <iostream>
# define N 4
using namespace std;
void main()
{

	int b = 1, i = 0, m = 0, c, d = 0, e = 0, t;
	int a[N][N];
	a[i][m] = b;
	for (t = 1; t<N; t++)
	{
		m = d;
		i = e;
		if (m == 0)
		{
			i = i + 1;
			for (c = 0; c <= t; c++)
			{
				b = b + 1;
				a[i - c][m + c] = b;
				d = m + c;
				e = i - c;
			}
		}

		else
		{
			m = d + 1;
			i = e;
			for (c = 0; c <= t; c++)
			{
				b = b + 1;
				a[i + c][m - c] = b;
				d = m - c;
				e = i + c;
			}
		}
	}



	if (N % 2 == 0)
	{
		for (t = N - 2; t >= 1; t--)
		{
			m = d;
			i = e;
			if (m == N)
			{
				i = i + 1;
				for (c = 0; c <= t; c++)
				{
					b = b + 1;
					a[i + c][m - c] = b;
					d = m - c;
					e = i + c;
				}
			}

			else
			{
				m = d + 1;
				for (c = 0; c <= t; c++)
				{
					b = b + 1;
					a[i - c][m + c] = b;
					d = m + c;
					e = i + c;
				}
			}
		}
	}
	else
	{
		for (t = N - 2; t >= 1; t--)
		{
			m = d;
			i = e;
			if (m != 0)
			{
				m = m + 1;
				for (c = 0; c <= t; c++)
				{
					b = b + 1;
					a[i - c][m + c] = b;
					d = m + c;
					e = i - c;
				}
			}
			else
			{
				i = i + 1;
				for (c = 0; c <= t; c++)
				{
					b = b + 1;
					a[i + c][m - c] = b;
					d = m - c;
					e = i + c;
				}
			}
		}
	}



	for (i = 0; i<N; i++)
	{
		for (m = 0; m<N; m++)
		{
			cout << a[i][m] << " ";
		}
		cout << endl;
	}
}
