//���ַ������ֵĴ���
//Hui Li,December 28,2015
#include<iostream>
#include<string>
using namespace std;
void main()
{
	int p(string,string);
	string s1,s;

	cout << "�������ַ�����";
	cin >> s1;
    cout << "������Ҫ��ѯ���ַ�����";
	cin >> s;
	cout << s << "���ִ�����" << p(s1,s) << endl;
}

int p(string s1,string s)
{
	int a = 0,b = 0,c = 0,k = 0;
	c = s.length();//����Ҫ��ѯ���ַ��ĳ���
	do
	{
		b = s1.length();//ԭ�ַ��ĳ���
		a = s1.find(s);
		if((a + c) > (b - 1))
			break;//������s�����ַ���������ѭ����������ִ��
		s1 = s1.substr(a + c);

	}

	while(a > 0);
		return k;
}