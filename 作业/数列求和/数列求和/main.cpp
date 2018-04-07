//数列求和
//Hui Li,November 23,2015

#include<iostream>
using namespace std;
void main()
{
	double fenzi = 2.0,fenmu = 1.0,sum = 0.0;
	double fenziold,fenmuold;
	for(int i = 1;i <= 20; i++)
	{
		fenziold = fenzi;
		fenmuold = fenmu;
		cout << fenziold << "/" << fenmuold << endl;
		sum += fenziold / fenmuold;
		fenmu = fenziold;
		fenzi = fenziold = fenmuold;
	}
	cout << sum;
}