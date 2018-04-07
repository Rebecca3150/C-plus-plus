//随机输入两个数，判断其大小关系

#include<iostream>
using namespace std;

void main()
{
	float a,b;
	cout<<"Input the value of a:";
	cin>>a;

	cout<<"Input the value of b:";
	cin>>b;
	//判断关系
	
	if(a>b)
		cout<<a<<">"<<b;

	else if(a<b)
		cout<<a<<"<"<<b;

	else
		cout<<a<<"="<<b;
}