//矩阵的乘法
//Hui Li,November 26,2015
#include<iostream>
#define M 1
#define N 2
#define K 3
using namespace std;
void main()
{
	int i,j,a[M][K],b[K][N],c[M][N];
	cout << "请输入" << M << "行" << K << "列矩阵：" << endl;
	for(i = 0;i < M; i++)
		for(j = 0;j < K; j++)
			cin >> a[i][j];

	cout << "请再输入另一个" << K << "行" << N << "列矩阵：" << endl;
	for(i = 0;i < K; i++)
		for(j = 0;j < N; j++)
			cin >> b[i][j];

	for(i = 0;i < M; i++)
		for(j = 0;j < N; j++)
		{
			c[M][N] = 0;
			for(int x = 0;x < K; x++)
				c[i][j] += a[i][x] * b[x][j];
		}
		 for(i=0; i<M; i++)    
		  for(j=0; j<N; j++)
		cout << c[i][j];

}