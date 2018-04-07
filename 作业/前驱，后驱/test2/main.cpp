//输出字符的前驱和后继
//Hui Li,November 24,2015

#include<iostream>
using namespace std;

void main()
{
	char a,b,c;
	cout << "请任意输入一个字符：";
	cin >> a;
	b = a - 1;
	c = a + 1;
	cout << "其前驱为：" << b << endl;;
	cout << "其后继为：" << c << endl;
}