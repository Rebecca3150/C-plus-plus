//����������

#include<iostream>
#include<cmath>
using namespace std;

void main()
{
	double x,y;
	char ch;

	cout<<"����������ʵ��x��y:";
	cin>>x>>y;

	cout<<"�����������:";
	cin>>ch;

	switch(ch)
	{
	case'-':cout<<x<<"-"<<y<<"="<<x-y;break;
	case'+':cout<<x<<"+"<<y<<"="<<x+y;break;
	case'*':
	case'.':cout<<x<<"*"<<y<<"="<<x*y;break;
	case'/':cout<<x<<"/"<<y<<"="<<x/y;break;
	}
}
