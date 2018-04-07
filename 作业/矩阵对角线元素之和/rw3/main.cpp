//矩阵对角线元素之和
//Jianfeng Hu,Nov.5.2015

#include<iostream>
using namespace std;

#define SIZE 2

void main()
{
	float matrix[SIZE][SIZE],n;
	int i,j,m;

	cout<<"Input the matrix with "<<SIZE<<" rows and columns:"<<endl;
	for(i=0;i<SIZE;i++)
		for(j=0;j<SIZE;j++)
			cin>>matrix[i][j];

	n=0;
	for(m=0;m<SIZE;m++)
	{
		n+=matrix[m][m];
	}

	cout<<"该矩阵对角线元素之和为:"<<n<<endl;

}