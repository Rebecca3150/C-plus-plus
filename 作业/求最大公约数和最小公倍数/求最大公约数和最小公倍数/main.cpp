//�����Լ������С������
//Hui Li,November 23,2015

#include<iostream>
using namespace std;

int gongyueandbei(int& a,int& b,int& c,int& d)
{
	int min = a < b ? a:b;
	for(int i = 1;i <= min; i++)
		if(a % i == 0 || b % i == 0)
		{c = i;
	d = a * b / c;}
	return c,d;
	
}



void main()
{
	int a,b,yue,bei;
	cout << "����������������������";
	cin >> a >> b;

    cout << "���Լ������С�������ֱ�Ϊ��" << gongyueandbei(a,b,yue,bei); 
}