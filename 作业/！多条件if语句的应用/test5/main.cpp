//输入数据的奇偶判断，若为奇数，进一步判断是否为3的倍数，若为偶数，则进一步判断包含数字的位数
//要求：若为偶数，输出“8为偶数，1位数”，若为奇数，输出“17为奇数，不是3的倍数”
//Hui Li,November 26

#include<iostream>
using namespace std;

//引用判断偶数位数的函数
void oushu(int k)
{
	int wei = 0;
	while(k)
	{
	    k = k / 10;

		wei++;
	}
	cout << wei << endl;
}

//主函数
void main()
{
	//输入
	int n;
	int a,b;
	cout << "请输入一个整数：";
	cin >> n;

	//判断偶数和奇数
	if(n % 2 == 0)
		a = n;
	else
		b = n;
	

	//奇数进一步判断是否为3的倍数
	int wei;
    if(b % 3 == 0)
		cout << b << "是奇数，是3的倍数。" << endl;
	else
		cout << b << "是奇数，不是3的倍数。" << endl;

	cout << a << "为偶数，" << "且为" << wei << "位数。" << endl;
}
