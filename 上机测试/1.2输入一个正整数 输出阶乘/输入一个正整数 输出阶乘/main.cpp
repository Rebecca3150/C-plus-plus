//输入一个整数 输出阶乘
//李慧，2016.1.15

#include<iostream>
using namespace std;
void main()
{
	int n, i;
	int k = 1;

	cout<<"请输入一个任意整数:";
	cin>>n;

	for(i=1;i<=n;i++)
		k*=i;

	cout << n << "的阶乘为:" << k << endl;;
}
