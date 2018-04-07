//判断回文数
//Hui Li,Dewcember 4,2015
#include<iostream>
#define N 4
using namespace std;
void main()
{
	int a[N];
	int i, t = 0;
	cout << "请输入" << N << "个整数" << endl;
	for (i = 0; i<N; i++)
		cin >> a[i];
	for (i = 0; i<N; i++)
	{
		if (a[i] != a[N - 1 - i])
			t = 1;
		break;
	}
	if (t == 0)
		cout << "这个数是回文数" << endl;
	else
		cout << "这个数不是回文数 ";
}