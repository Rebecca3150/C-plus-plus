//Hui Wang, Nov. 20, 2015
//Revised on Dec. 1, 2015

#include <iostream>
using namespace std;

void main()
{
	int n,m;

	cout << "������һ��������:";
    cin >> n;
    
	//λ���ķ���
	m = n;
	int wei[20],numberOfWei = 0;
    while(m)
	{
		wei[numberOfWei] = m % 10;
		m = m / 10;
		numberOfWei++;
	}

	//�����ж�
	int indexMin = 0,indexMax = numberOfWei - 1;
	bool flag = true;
	while(indexMin <= indexMax)
	{
		if(wei[indexMin]  != wei[indexMax])
		{
			flag = false;
			break;
		}
		indexMin++;
		indexMax--;
	}

	if (flag == true)
	    cout << n << "�ǻ�������" << endl;
	else
		cout << n << "���ǻ�������" << endl;
}