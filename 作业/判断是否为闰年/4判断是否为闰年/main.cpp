//�ж��Ƿ�Ϊ����
//Hui Li,December 28,2015
#include<iostream>
using namespace std;
void main()
{
	bool s(int);
	int n;
	cout << "����������һ����ݣ�";
	cin >> n;

	if(s(n) == 1)
		cout << n << "�����꣡";
	if(s(n) == 0)
		cout << n << "�������꣡";
}
bool s(int n)
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
		if(n % 4 == 0 && n % 100 != 0)
			flag = true;
		else
			flag = false;
	}
	return flag;
}