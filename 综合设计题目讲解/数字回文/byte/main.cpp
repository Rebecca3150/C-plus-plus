//Hui Wang, Nov. 20, 2015
//Revised on Dec. 1, 2015

#include <iostream>
using namespace std;

void main()
{
	int n,m;

	cout << "请输入一个正整数:";
    cin >> n;
    
	//位数的分离
	m = n;
	int wei[20],numberOfWei = 0;
    while(m)
	{
		wei[numberOfWei] = m % 10;
		m = m / 10;
		numberOfWei++;
	}

	//回文判断
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
	    cout << n << "是回文数！" << endl;
	else
		cout << n << "不是回文数！" << endl;
}