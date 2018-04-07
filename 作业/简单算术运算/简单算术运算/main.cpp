//简单算术运算

#include<iostream>
#include<cmath>
using namespace std;

void main()
{
	double x,y;
	char ch;

	cout<<"请输入两个实数x和y:";
	cin>>x>>y;

	cout<<"请输入运算符:";
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
