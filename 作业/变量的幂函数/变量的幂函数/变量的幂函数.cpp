//�ݺ���
//������ 11��15��
#include <iostream>
#include <cmath>     //pow��ͷ�ļ�
using namespace std;
int main()
{
  //����
  double a, b, c, d;
  cout << "������һ��������";
  cin >> a;

  //����
  b = pow (a,2);
  c = pow (a,3);
  d = pow (a,3.5);

  //���
  cout << "������ƽ��Ϊ��" << b << endl;
  cout << "���������η�Ϊ��"<< c << endl;
  cout << "������������η�Ϊ��"<< d << endl;

  return 0;
}