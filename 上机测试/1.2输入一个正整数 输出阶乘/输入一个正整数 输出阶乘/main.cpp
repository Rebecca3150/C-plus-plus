//����һ������ ����׳�
//��ۣ�2016.1.15

#include<iostream>
using namespace std;
void main()
{
	int n, i;
	int k = 1;

	cout<<"������һ����������:";
	cin>>n;

	for(i=1;i<=n;i++)
		k*=i;

	cout << n << "�Ľ׳�Ϊ:" << k << endl;;
}
