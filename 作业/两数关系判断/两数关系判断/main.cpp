//����������������ж����С��ϵ

#include<iostream>
using namespace std;

void main()
{
	float a,b;
	cout<<"Input the value of a:";
	cin>>a;

	cout<<"Input the value of b:";
	cin>>b;
	//�жϹ�ϵ
	
	if(a>b)
		cout<<a<<">"<<b;

	else if(a<b)
		cout<<a<<"<"<<b;

	else
		cout<<a<<"="<<b;
}