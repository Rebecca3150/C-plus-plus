//矩阵的减法
//Jianfeng Hu,Nov.5.2015

#include<iostream>
using namespace std;

#define ROWSIZE 2
#define COLSIZE 3

void main()
{
	float matrix1[ROWSIZE][COLSIZE],matrix2[ROWSIZE][COLSIZE];
	float difmatrix[ROWSIZE][COLSIZE];
	int i,j;

	cout<<"Input the first matrix with "<<ROWSIZE<<" rows and "<<COLSIZE<<" columns:"<<endl;
	for(i=0;i<ROWSIZE;i++)
		for(j=0;j<COLSIZE;j++)
			cin>>matrix1[i][j];

	cout<<"Input the second matrix with "<<ROWSIZE<<" rows and "<<COLSIZE<<" columns:"<<endl;
	for(i=0;i<ROWSIZE;i++)
		for(j=0;j<COLSIZE;j++)
			cin>>matrix2[i][j];

	for(i=0;i<ROWSIZE;i++)
		for(j=0;j<COLSIZE;j++)
			difmatrix[i][j]=matrix1[i][j]-matrix2[i][j];

	cout<<"两矩阵之差为:"<<endl;
	  for(i=0;i<ROWSIZE;i++)
	  {
		  for(j=0;j<COLSIZE;j++)
			  cout<<difmatrix[i][j]<<" ";
		  cout<<endl;
	  }

}