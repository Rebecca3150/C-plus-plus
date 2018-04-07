//Hui Wang, Dec. 1, 2015
#include <iostream>
using namespace std;

int yinzihe(int n)
{
	int sum = 0;
	for(int i = 1; i < n; i++)
		if(n % i == 0)
			sum += i;

	return sum;
}

void main()
{
	int i,s;
	for( i = 1; i <= 10000; i++)
	{
		s = yinzihe(i);
		if (yinzihe(s) == i)
		    cout << i << "与" << s << "为相亲数对!" << endl;
	}
}