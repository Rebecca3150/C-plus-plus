//������������������ ��̬�����ͷ�
//��ۣ�2016.1.16

#include<iostream>
#include<new>
using namespace std;
int main()
{
	int i,n,j,k,t;
	int *p;

	cout<<"���붯̬����ĸ���:";
	cin>>n;

	p=new int[n];
	if(p==NULL)
	{
		cout<<"Error:memory could not be allocated ";
		return 1;
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

	cout<<"����Ľ��Ϊ:"<<endl;
	for(i=0;i<n;i++)
		cout<<p[i]<<" ";

	delete[] p;
	return 0;

}
