//相亲数对
//Hui Li,December 1,2015
#include<iostream>
using namespace std;

bool shudui(int n,int m)
{
	int sum1 = 0;
	for(int i = 1;i < n; i++)
		if(n % i == 0)
			sum1 += i;

	int sum2 = 0;
	for(int i = 1;i < m; i++)
		if(m % i == 0)
			sum2 += i;

	if(sum2 == n,sum1 == m)
		return true;
	else
		return false;
}
void main()
{
	int i,s;
	cout << "请输入10000以内的任意两个整数：";
	cin >> i >> s;
	    if(shudui(i,s))
			cout << i << "和" << s << "是相亲数对！" << endl;	
		else
			cout << i << "和" << s << "不是相亲数对！" << endl;
}