//查找---折半
//numberianfeng Hu,Nov.15.2015

#include<iostream>
using namespace std;

#define N 10

int main()
{
	int i,a[N],number,k,m,l=0;
	bool flag=0;

	cout<<"请输入 "<<N<<" 个数:"<<endl;
	for(i=0;i<N;i++)
		cin>>a[i];

	cout<<"请输入要查找的数:"<<endl;
	cin>>number;

	int low=0,high=N-1,mid;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(number>a[mid])
			low=mid+1;
		else if(number<a[mid])
			high=mid-1;
		else
		{
			m=mid;
			flag=1;
			break;
		}
	}

    if(flag==0)
	{
		cout<<"查找失败!"<<endl;
		return 0;
	}

	int m1=m-1,m2=m+1;
	while(m1>=0 && a[m1]==number)
		m1--;
	while(m2<N && a[m2]==number)
		m2++;

	cout <<"共含有 "<<m2-m1-1<<" 个要查找的数"<<endl;
	cout <<"从第 " << m1+2 <<" 位到第 "<<m2<<" 位"<<endl;

}