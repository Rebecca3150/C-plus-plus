//��������������λ�����ĸ�λ����
//Hui Li,November 24,2015

#include<iostream>
using namespace std;

void main()
{
	int x;
	cout << "����������һ����λ����������" << endl;
	cin >> x;

	int b1 = x % 10;
	int b2 = x / 10 % 10;
	int b3 = x /100 % 100;
	cout << "�����Ϊ��" << b3 << " " << b2  << " " << b1  << " "<< endl;
}