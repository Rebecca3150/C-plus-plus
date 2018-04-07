//Hui Wang, Nov. 29, 2015
#include <iostream>
#include <iomanip>
using namespace std;

#define N 10

void main()
{
    int a[N][N],i,j,value = 1,hangIndex,lieIndex,numOfIteration;
    
    for(i = 0; i < N / 2; i++)
	{
         //ÉÏÌî³ä
		hangIndex = i;
		for(lieIndex = i; lieIndex < N - i - 1; lieIndex++)
		{
			a[hangIndex][lieIndex] = value;
			value++;
		}

		//ÓÒÌî³ä
		for(hangIndex = i; hangIndex < N - i -  1; hangIndex++)
		{
			a[hangIndex][lieIndex] = value;
			value++;
		}
		//ÏÂÌî³ä
		for(lieIndex = N- i - 1; lieIndex > i ; lieIndex--)
		{
			a[hangIndex][lieIndex] = value;
			value++;
		}
		//×óÌî³ä
		for(hangIndex = N - i - 1; hangIndex > i ; hangIndex--)
		{
			a[hangIndex][lieIndex] = value;
			value++;
		}
	}
	if(N % 2 == 1)
		a[N / 2][N / 2] = value;

	//Êä³ö
	for(i = 0; i < N;i++)
	{
		for(j = 0; j < N;j++)
			cout << setw(3) << right << a[i][j] << " ";
		cout << endl;
	}
}
