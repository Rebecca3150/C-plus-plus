//Fibonacci SequenceµÄÇ°30Ïî
//Jianfeng Hu,Oct.29.2015

#include<iostream>
using namespace std;

#define SIZE 30

void main()
{
	float Fibonacci[SIZE]={1,2};
	int i;

	for(i=2;i<SIZE;i++)
		Fibonacci[i]=2*Fibonacci[i-2]+Fibonacci[i-1];

	cout<<"The first"<<SIZE<<"elements of the Fibonacci sequence are:"<<endl;
	for(i=0;i<SIZE;i++)
		cout<<Fibonacci[i]<<endl;

}