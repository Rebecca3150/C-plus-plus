//��������ʵ�� ������������
//��ۣ�2016.1.15

#include<iostream>
using namespace std;
#define n 3
void main()
{
	float a[n],t;
	int i,j,k;

	cout<<"������"<<n<<"��ʵ��:"<<endl;
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
	cout<<"����Ľ��Ϊ:"<<endl;
	for(i=0;i<n;i++)
		cout<<a[i]<<" ";

}