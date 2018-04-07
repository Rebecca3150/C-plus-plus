//ÍêÊı
//Hui Li,November 23,2015

#include<iostream>
using namespace std;

bool wanshu(int n)
{
	int sum = 0;
	for(int i = 1;i < n; i++)
		if(n % i == 0)
			sum += i;

	if(sum == n)
		return true;
	else
		return false;
}
void main()
{
	for(int i = 1;i <= 1000; i++)
		if(wanshu(i))
			cout << i << endl;
}
