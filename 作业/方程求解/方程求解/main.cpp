//�󷽳�ax2+bx+c=0���ֿ��ܵĽ�
//Hui Li,December 1,2015
#include<iostream>
#include<cmath>
using namespace std;
void main()
{
	//����
	double a,b,c;
	float x;
	cout << "����������˷��̵�����ϵ����" ;
	cin >> a >> b >> c;
	
	//���
	if(b*b-4*a*c < 0)
		cout << "���������룡" << endl;
	else
	if(a == 0 )
		if(b ==0 )
			if(c ==0 )
		cout << "�����������⣡ " << endl;
			else
				cout << "�����޽⣡" << endl;
		else
			cout << "���̵Ľ�x = " << - c / b << endl;
	else
		cout << "���������⣺x1 = " << (-b + sqrt(b*b - 4*a*c)) / 2*a << ",x2 = " << (-b - sqrt(b*b - 4*a*c)) / 2*a  << endl;
}