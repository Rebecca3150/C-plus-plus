//�˷Ѽ��㣨switch��䣩

#include<iostream>
using namespace std;

void main()
{
	double s,p,w;
	int y;

	cout<<"����·�̣����";
	cin>>s;

	cout<<"�����������(��)";
	cin>>w;

	if(s<0||w<0)
	{	
		cout<<"���������������";
       c=1;
	}
	y=int(s/50);

	switch(y)
	{
	case 0:p=10*s*w*0.98;break;
	case 1:p=10*s*w*0.98;break;
	case 2:
	case 3:p=10*s*w*0.95;break;
	case 4:
	case 5:
	case 6:
	case 7:p=10*s*w*0.92;break;
	case 8:
	case 9:
	case 10:
	case 11:
	case 12:
	case 13:
	case 14:p=10*s*w*0.89;break;
	default:p=10*s*w*0.85;break;
	}
	cout<<"���˷�Ϊ"<<p;
}
