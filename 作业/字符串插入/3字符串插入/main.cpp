//字符串的插入
//Hui Li,December 28,2015
#include<iostream>
#include<string>
using namespace std;
void main()
{
	int i,a;
	string s1,s2,s3;
	cout << "请输入原来的字符串：";
	getline(cin,s1);//可以输入空格
	cout << "请输入要插入的字符串：";
	cin >> s2;
	cout << "请输入插入的位置坐标：";
	cin >> i;
	
	a = s1.length();

	if(i <= a - 1)
	{
		s3 = s1.insert(i,s2);
			cout << "插入后的字符串为：" << s3;
	}
	else
		cout << "位置坐标输入错误！";
}