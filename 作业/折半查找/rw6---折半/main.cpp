//����---�۰�
//numberianfeng Hu,Nov.15.2015

#include<iostream>
using namespace std;

#define N 10

int main()
{
	int i,a[N],number,k,m,l=0;
	bool flag=0;

	cout<<"������ "<<N<<" ����:"<<endl;
	for(i=0;i<N;i++)
		cin>>a[i];

	cout<<"������Ҫ���ҵ���:"<<endl;
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
		cout<<"����ʧ��!"<<endl;
		return 0;
	}

	int m1=m-1,m2=m+1;
	while(m1>=0 && a[m1]==number)
		m1--;
	while(m2<N && a[m2]==number)
		m2++;

	cout <<"������ "<<m2-m1-1<<" ��Ҫ���ҵ���"<<endl;
	cout <<"�ӵ� " << m1+2 <<" λ���� "<<m2<<" λ"<<endl;

}