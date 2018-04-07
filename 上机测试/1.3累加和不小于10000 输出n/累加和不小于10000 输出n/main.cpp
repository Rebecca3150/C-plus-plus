//累加和不小于10000，输出n
//李慧，2016.1.15

#include<iostream>
using namespace std;
void main()
{
	int n;
	int sum=0;

	for(n=1;sum<10000;n++)
		sum+=n;
	cout<<n;
}