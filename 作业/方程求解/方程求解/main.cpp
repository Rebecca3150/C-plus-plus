//求方程ax2+bx+c=0各种可能的解
//Hui Li,December 1,2015
#include<iostream>
#include<cmath>
using namespace std;
void main()
{
	//输入
	double a,b,c;
	float x;
	cout << "请任意输入此方程的三个系数：" ;
	cin >> a >> b >> c;
	
	//输出
	if(b*b-4*a*c < 0)
		cout << "请重新输入！" << endl;
	else
	if(a == 0 )
		if(b ==0 )
			if(c ==0 )
		cout << "方程有无数解！ " << endl;
			else
				cout << "方程无解！" << endl;
		else
			cout << "方程的解x = " << - c / b << endl;
	else
		cout << "方程有两解：x1 = " << (-b + sqrt(b*b - 4*a*c)) / 2*a << ",x2 = " << (-b - sqrt(b*b - 4*a*c)) / 2*a  << endl;
}