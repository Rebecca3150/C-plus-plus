//Hui Wang, Nov. 20, 2015
#include <iostream>
using namespace std;

void main()
{
	int n,m;

	cout << "������һ��������:";
    cin >> n;
    
	m = n;
	int wei[20],numberOfWei = 0;
    while(m)
	{
		wei[numberOfWei] = m % 10;
		m = m / 10;
		numberOfWei++;
	}

	cout << n << "��" << numberOfWei << "λ" << endl;
	cout << "�Ӹ�λ����λΪ:" << endl;
	for(int i = numberOfWei - 1; i >= 0; i--)
		cout << wei[i] << endl;
}