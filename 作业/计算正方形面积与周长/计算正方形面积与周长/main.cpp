//输入正方形的边长，输出它的面积和周长。
//*****，2015年11月10日。

#include<iostream>
 using namespace std;

int main()
{
	//输入
	double a,b,c;
	cout <<"输入正方形的边长：";
	cin >>a;

	//计算
    b=a*a;
	c=4*a;

	//输出
	cout <<"正方形面积为："<<b<<endl ;
	cout <<"正方形周长为："<<c<<endl ;

	return 0;
}