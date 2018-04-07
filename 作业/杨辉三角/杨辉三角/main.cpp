//Ñî»ÔÈı½Ç
//Hui Li,November 29,2015
#include<iostream>
#define N 6
using namespace std;
void main()
{
	int a[N][N];
	int i,j;
	for(i = 0;i < N; i++)
	{
	a[i][0] = 1;
	a[i][i] = 1;
	}
for(i = 2;i < N; i++)
	for(j = 1;j < i; j++)
	  a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
	    
		for(i = 0;i < N; i++)
		{
			for(j = 0;j <= i; j++)
		cout << a[i][j] << " " ;
		cout << endl;
		}
}