//递归函数
//Hui Li,November 23,2015

#include<iostream>
using namespace std;

float fac(int n)
{
	float y;
	y = n + fac(n - 1);
    return y;
}

void main(void)
{
	
	int n;
	float y;
	cout << "Input n:";
	cin >> n;
	cout << "最后结果为" << y;
}
