//计算1+2+3....100的结果
//李慧，2016.1.15

#include<iostream>
using namespace std;
void main()
{
	int sum=0;
	for(int i = 1;i <= 100;i++)
		sum+=i;
	cout<<sum;
}