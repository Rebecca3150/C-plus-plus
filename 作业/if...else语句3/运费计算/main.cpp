//�˷Ѽ��㣨if...else��䣩

#include<iostream>
using namespace std;

void main()
{
	double s,w,p;

	cout<<"����·�̣����";
	cin>>s;

	cout<<"��������������֣�";
	cin>>w;

	if(s<0||w<0)
		cout<<"���������������";
	else
	{
		if(s<50)
			p=10*s*w;
		else if(s<100)
			p=10*s*w*0.98;
		else if(s<200)
			p=100*s*w*0.95;
		else if(s<400)
			p=100*s*w*0.92;
		else if(s<100)
			p=100*s*w*0.89;
		else
			p=100*s*w*0.85;
		cout<<"���˷�Ϊ"<<p;
	}
}
