//����
//numberianfeng Hu,Nov.6.2015

#include<iostream>
using namespace std;

#define N 10

void main()
{
	int i,a[N],number,l=0,index[N];
	bool flag=0;

	cout<<"Please input "<<N<<" integers:"<<endl;
	for(i=0;i<N;i++)
		cin>>a[i];
	cout<<"Please input the finding number:"<<endl;
	cin>>number;

	for(i=0;i<N;i++)
		if (a[i]==number)
		{
			flag=1;
			index[l]=i;
			l+=1;
		}

	if(flag==0)
		cout<<"����ʧ�ܣ�"<<endl;

	if(flag==1)
	{
		cout<<"���ҳɹ�!"<<endl;
		cout<<"�����й��� "<<l<<" �� "<<number<<endl;
		cout<<"���±�Ϊ:";
		for(i=0;i<l;i++)
			cout<<index[i]<<" ";
		cout<<endl;
	}

}