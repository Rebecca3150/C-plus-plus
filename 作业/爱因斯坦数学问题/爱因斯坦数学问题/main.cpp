//爱因斯坦数学问题
//Hui Li,December 15,2015
# include <iostream>
using namespace std;
void main()
{
	int t, b;
	for (t = 1;; t++)
	{
		b = 7 * t;
		if (b % 6 == 5 && b % 5 == 4 && b % 3 == 2)
		{
			cout << "这个阶梯有" << b << "阶" << endl;
			break;
		}
	}
}
