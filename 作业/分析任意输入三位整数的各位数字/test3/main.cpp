//分析任意输入三位整数的各位数字
//Hui Li,November 24,2015

#include<iostream>
using namespace std;

void main()
{
	int x;
	cout << "请任意输入一个三位数的整数：" << endl;
	cin >> x;

	int b1 = x % 10;
	int b2 = x / 10 % 10;
	int b3 = x /100 % 100;
	cout << "最后结果为：" << b3 << " " << b2  << " " << b1  << " "<< endl;
}