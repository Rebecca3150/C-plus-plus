//Hui Wang, Dec. 2, 2015
#include <iostream>
#include <iomanip>
using namespace std;

#define N 4

void main()
{
	int a[N][N],i,j,value = 1,hangIndex,lieIndex;

	for(i = 0; i < N; i++)
	{
		if(i % 2 == 0)
		{
              for(lieIndex = i; lieIndex >= 0; lieIndex--)
			  {
				  a[i - lieIndex][lieIndex] = value;
				  value++;
			  }
		}
		else
		{
			for(lieIndex = 0; lieIndex <= i; lieIndex++)
			{
				a[i - lieIndex][lieIndex] = value;
				value++;
			}
		}
	}
    
	for(i = N; i <= 2 * (N - 1); i++)
	{
		int m,M;
		m = i % N + 1;
		M = N - 1;

		if(i % 2 == 1)
		{
			for(lieIndex = m; lieIndex <= M; lieIndex++)
			{
				a[i - lieIndex][lieIndex] = value;
				value++;
			}
		}
		else
		{
			for(lieIndex = M; lieIndex >= m; lieIndex--)
			{
				a[i - lieIndex][lieIndex] = value;
				value++;
			}
		}
	}

	//Êä³ö
	for(i = 0; i < N;i++)
	{
		for(j = 0; j < N;j++)
			cout << setw(3) << right << a[i][j] << " ";
		cout << endl;
	}
}