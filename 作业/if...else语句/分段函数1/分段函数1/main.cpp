//分段函数（if...else语句）

#include<iostream>
using namespace std;

void main()
{
	float x,y;
	cout<<"请输入x值";
	cin>>x;

	if(x>=0)
		y=x+2;

	else
		y=x-2;

	cout<<"y="<<y<<endl;
}