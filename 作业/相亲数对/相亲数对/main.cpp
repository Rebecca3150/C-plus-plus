//��������
//Hui Li,December 1,2015
#include<iostream>
using namespace std;

bool shudui(int n,int m)
{
	int sum1 = 0;
	for(int i = 1;i < n; i++)
		if(n % i == 0)
			sum1 += i;

	int sum2 = 0;
	for(int i = 1;i < m; i++)
		if(m % i == 0)
			sum2 += i;

	if(sum2 == n,sum1 == m)
		return true;
	else
		return false;
}
void main()
{
	int i,s;
	cout << "������10000���ڵ���������������";
	cin >> i >> s;
	    if(shudui(i,s))
			cout << i << "��" << s << "���������ԣ�" << endl;	
		else
			cout << i << "��" << s << "�����������ԣ�" << endl;
}