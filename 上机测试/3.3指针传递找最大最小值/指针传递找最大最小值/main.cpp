//指针传递找最大值和最小值
//李慧

#include<iostream>
using namespace std;
#define n 5
void fun(int a[],int *p_max,int *p_min)
{
	*p_max=a[0];
	*p_min=a[0];

	for(int i=1;i<n;i++)
	{
		if(a[i]>*p_max)
			*p_max=a[i];
		if(a[i]<*p_min)
			*p_min=a[i];
    }
}

void main()
{
	int a[n],i,max,min;

	cout<<"请输入"<<n<<"个整数:"<<endl;
	for(i=0;i<n;i++)
		cin>>a[i];
	fun(a,&max,&min);

	cout<<"最大值是:"<<max<<endl<<"最小值是:"<<min<<endl;
}