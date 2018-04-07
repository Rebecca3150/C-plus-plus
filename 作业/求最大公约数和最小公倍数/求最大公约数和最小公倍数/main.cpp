//求最大公约数和最小公倍数
//Hui Li,November 23,2015

#include<iostream>
using namespace std;

int gongyueandbei(int& a,int& b,int& c,int& d)
{
	int min = a < b ? a:b;
	for(int i = 1;i <= min; i++)
		if(a % i == 0 || b % i == 0)
		{c = i;
	d = a * b / c;}
	return c,d;
	
}



void main()
{
	int a,b,yue,bei;
	cout << "请任意输入两个正整数：";
	cin >> a >> b;

    cout << "最大公约数和最小公倍数分别为：" << gongyueandbei(a,b,yue,bei); 
}