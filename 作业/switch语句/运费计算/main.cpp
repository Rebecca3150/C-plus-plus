//运费计算（switch语句）

#include<iostream>
using namespace std;

void main()
{
	double s,p,w;
	int y;

	cout<<"输入路程（公里）";
	cin>>s;

	cout<<"输入货物重量(吨)";
	cin>>w;

	if(s<0||w<0)
	{	
		cout<<"输入错误，重新输入";
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
	cout<<"总运费为"<<p;
}
