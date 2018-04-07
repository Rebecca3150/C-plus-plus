//ÅÐ¶Ï×Ö·û´®ÊÇ·ñ¶Ô³Æ
//Hui Li,December 28,2015
#include<iostream>
#include<string>
using namespace std;
void main()
{
	bool s(string);

	string str;

	cout << "ÇëÊäÈëÒ»¸ö×Ö·û´®£º";
	cin >> str;

	if(s(str) == 1)
		cout << "YES!";
	if(s(str) == 0)
		cout << "NO!";
}
bool s(string str)
{
	bool flag;
	int n,t = 0;
	n = str.length();
	for(int i = 0;i < n / 2; i++)
	{
		if(str[i] == str[n-i-1])
			t = 1;
		else
		{
			t = 0;
			break;
		}
	}

	if(t == 1)
		flag = true;
	else
		flag = false;

	return flag;
}