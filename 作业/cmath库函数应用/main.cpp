//cmath�⺯��Ӧ��
//Hui Li,November 24,2015

#include<iostream>
#include<cmath>
using namespace std;

void main()
{
	double a,b,x;
	cout << "�����뻡��x:";
	cin >> x;
   cout << "����������ʵ����";
   cin >> a >> b;

   if(a <= 0 || b <= 0)
	   cout << "����������" << endl;
   else
   cout << "��bΪ��a�Ķ���Ϊ��" << log(a)/log(b) << endl;
   cout << "a��b����Ϊ��" << pow(a,b) << endl;
   cout << "����x������ֵΪ��" << tan(x) << endl;

}