//输入若干实数 进行升序排序
//李慧，2016.1.15

#include<iostream>
using namespace std;
#define n 3
void main()
{
	float a[n],t;
	int i,j,k;

	cout<<"请输入"<<n<<"个实数:"<<endl;
	for(i=0;i<n;i++)
		cin>>a[i];

	for(i=0;i<n-1;i++)
	{
		k=i;
		for(j=i+1;j<n;j++)
			if(a[j]<a[k])
				k=j;
		if(k!=i)
		{
			t=a[i];
			a[i]=a[k];
			a[k]=t;
		}
	}
	cout<<"升序的结果为:"<<endl;
	for(i=0;i<n;i++)
		cout<<a[i]<<" ";

}