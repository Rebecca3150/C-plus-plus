//���Ǻ���
//������ 11��15��
#include <iostream>
#include <cmath>    //���Ǻ���ͷ�ļ� 
using namespace std;

int main()
{
    double a, b, c, d;

    //����
    cout << "������һ��������";
    cin >> a;

    //����
    b = sin(a);
    c = cos(a);
    d = tan(a);

    //��� 
    cout << "���Һ���Ϊ��"<< b << endl;
    cout << "���Һ���Ϊ��"<< c << endl;
    cout << "���к���Ϊ��"<< d << endl;
	cout << "���к���Ϊ��" << 1 / d << endl;

    return 0;
}