//�ַ����Ĳ���
//Hui Li,December 28,2015
#include<iostream>
#include<string>
using namespace std;
void main()
{
	int i,a;
	string s1,s2,s3;
	cout << "������ԭ�����ַ�����";
	getline(cin,s1);//��������ո�
	cout << "������Ҫ������ַ�����";
	cin >> s2;
	cout << "����������λ�����꣺";
	cin >> i;
	
	a = s1.length();

	if(i <= a - 1)
	{
		s3 = s1.insert(i,s2);
			cout << "�������ַ���Ϊ��" << s3;
	}
	else
		cout << "λ�������������";
}