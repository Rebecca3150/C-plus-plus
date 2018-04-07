//运费计算（if...else语句）

#include<iostream>
using namespace std;

void main()
{
	double s,w,p;

	cout<<"输入路程（公里）";
	cin>>s;

	cout<<"输入货物重量（吨）";
	cin>>w;

	if(s<0||w<0)
		cout<<"输入错误，重新输入";
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
		cout<<"总运费为"<<p;
	}
}
