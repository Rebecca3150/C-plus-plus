//�жϻ�����
//Hui Li,Dewcember 4,2015
#include<iostream>
#define N 4
using namespace std;
void main()
{
	int a[N];
	int i, t = 0;
	cout << "������" << N << "������" << endl;
	for (i = 0; i<N; i++)
		cin >> a[i];
	for (i = 0; i<N; i++)
	{
		if (a[i] != a[N - 1 - i])
			t = 1;
		break;
	}
	if (t == 0)
		cout << "������ǻ�����" << endl;
	else
		cout << "��������ǻ����� ";
}