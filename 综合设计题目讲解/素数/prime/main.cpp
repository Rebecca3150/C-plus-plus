#include <iostream>
#include "prime.h"

int main()
{
	int p,q,lineOfNumber;
	cout << "请输入整数的范围p,q: ";
    cin >> p >> q;
    
	cout << "请输出每行显示素数的个数: ";
	cin >> lineOfNumber;

    printPrime(p,q,lineOfNumber);

	return 0;
}