//������������������ ��̬�����ͷ�
//��ۣ�2016.1.16

#include<iostream>
#include<new>
using namespace std;
void main()
{
	int i,n,j,k;
	double *p,t;

	cout<<"���붯̬����ĸ���:";
	cin>>n;

	p=new double[n];
	if(p==NULL)
	{
		cout<<"Error:memory could not be allocated ";
	}

	for(i=0;i<n;i++)
		cin>>p[i];

	for(i=0;i<n-1;i++)
	{
		k=i;
		for(j=i+1;j<n;j++)
			if(p[j]<p[k])
				k=j;
		if(k!=i)
		{
			t=p[i];
			p[i]=p[k];
			p[k]=t;
		}
	}

	cout<<"����Ϊ:"<<endl;
	for(i=0;i<n;i++)
		cout<<p[i]<<" ";

	delete[] p;
}
