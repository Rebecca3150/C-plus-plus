#include <iostream>
#include "prime.h"

int main()
{
	int p,q,lineOfNumber;
	cout << "�����������ķ�Χp,q: ";
    cin >> p >> q;
    
	cout << "�����ÿ����ʾ�����ĸ���: ";
	cin >> lineOfNumber;

    printPrime(p,q,lineOfNumber);

	return 0;
}