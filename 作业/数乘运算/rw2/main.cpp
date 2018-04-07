//Êı³ËÔËËã
//Jianfeng Hu,Oct.29.2015

#include<iostream>
using namespace std;

void main()
{
	float v1[3],j;
	int i;
	
	cout<<"Input the vector:";
	for(i=0;i<3;i++)
		cin>>v1[i];
	cout<<"Input a number:";
	cin>>j;

	float v2[3];
	for(i=0;i<3;i++)
		v2[i]=v1[i]*j;

	cout<<"The result is:"<<endl;
	for(i=0;i<3;i++)
		cout<<v2[i]<<" ";
	cout<<endl;

}