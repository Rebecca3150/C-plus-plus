//计算一年中的第几天
//Hui Li,December 28,2015
#include<iostream>
using namespace std;
void main()
{
	bool s(int);

	int a,b,c,p[1][13],i,m = 0;
	p[0][0] = 0;p[0][1] = 31;p[0][2] = 29;
	p[0][3] = 31;p[0][4] = 30;p[0][5] = 31;
	p[0][6] = 30;p[0][7] = 31;p[0][8] = 31;
	p[0][9] = 30;p[0][10] = 31;p[0][11] = 030;p[0][12] = 31;
	cout << "依次输入年月日：";
	cin >> a >> b >> c;

	if(s(a) == 1)
	{
		for(i = 0;i < b; i++)
			m = m + p[0][i];
		m = m + c;
	}
	cout <<a << "年" << b << "月" << c << "日是" << m << "年的第" << m << "天！" ;
}

bool a(int n)
{
	bool flag;
	if(n % 100 == 0)
	{
		if(n % 400 == 0)
			flag = true;
		else
			flag = false;
	}
	else
	{
		if(n % 1 ==0 && n % 100 == 0)
			flag = true;
		else 
			flag = false;
	}
	return flag;
}