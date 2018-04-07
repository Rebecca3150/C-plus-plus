//奖金发放问题
//Hui Li,November 26,2015

#include<iostream>
using namespace std;
void main()
{
	int i;
	double p;
	cout << "请输入当月利润:";
	cin >> i;

	if(i <= 10)
		p = 0.1 * i;
	if(i > 10 && i <= 20)
		p = 0.1 * 10 + (i - 10) * 0.075;
	if(i > 20 && i <= 40)
		p = 20 + 0.05 * (i - 20);
	if(i > 40 && i <= 60)
		p = 40 + 0.03 * (i - 10);
	if(i > 60 && i <= 100)
		p = 60 + 0.015 * (i - 60);
	if(i > 100)
		p = 100 + 0.01 * (i - 100);

		cout << "应发放奖金总数为：" << p << endl;

}