//打印所有的水仙花数
//Hui Li,November 23,2015

#include<iostream>
using namespace std;
int main()
{
	int x,a,b,c;
	
	for( x = 100;x <= 999; x++)
	{
	  a = x % 10;
	  b = x / 10 % 10;
	  c = x / 100 % 10;
		if(x == a*a*a + b*b*b + c*c*c)
			cout << x << '\n';
	}
	return 0;
}