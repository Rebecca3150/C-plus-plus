//子字符串出现的次数
//Hui Li,December 28,2015
#include<iostream>
#include<string>
using namespace std;
void main()
{
	int p(string,string);
	string s1,s;

	cout << "请输入字符串：";
	cin >> s1;
    cout << "亲输入要查询的字符串：";
	cin >> s;
	cout << s << "出现次数：" << p(s1,s) << endl;
}

int p(string s1,string s)
{
	int a = 0,b = 0,c = 0,k = 0;
	c = s.length();//计算要查询的字符的长度
	do
	{
		b = s1.length();//原字符的长度
		a = s1.find(s);
		if((a + c) > (b - 1))
			break;//若跳过s后无字符，就跳出循环；否侧继续执行
		s1 = s1.substr(a + c);

	}

	while(a > 0);
		return k;
}