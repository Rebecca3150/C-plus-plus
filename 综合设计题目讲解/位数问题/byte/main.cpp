//Hui Wang, Nov. 20, 2015
#include <iostream>
using namespace std;

void main()
{
	int n,m;

	cout << "请输入一个正整数:";
    cin >> n;
    
	m = n;
	int wei[20],numberOfWei = 0;
    while(m)
	{
		wei[numberOfWei] = m % 10;
		m = m / 10;
		numberOfWei++;
	}

	cout << n << "共" << numberOfWei << "位" << endl;
	cout << "从高位到低位为:" << endl;
	for(int i = numberOfWei - 1; i >= 0; i--)
		cout << wei[i] << endl;
}