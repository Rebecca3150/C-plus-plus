//�����ε��ܳ���������Խ��߳���
//������ 11��15��
#include <iostream>
#include<cmath>              //sqrt��pow��ͷ�ļ�
using namespace std;

int main ()
{
   double a, b, c, d, f;

   //����
   cout << "��ֱ����볤���εĳ����";
   cin >> a >> b;

   //����
   c = 2 * ( a + b );
   d = a * b;
   f = sqrt( a * a + b * b);

   //���
   cout << "�����ε��ܳ�Ϊ��" << c << endl;
   cout << "�����ε����Ϊ��" << d << endl;
   cout << "�����εĶԽ���Ϊ��" << f << endl;

   return 0;
}