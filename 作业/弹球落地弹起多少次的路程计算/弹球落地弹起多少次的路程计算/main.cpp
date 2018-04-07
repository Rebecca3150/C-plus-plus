//弹球落地弹起多少次的路程计算
//要求：一个球从100米高度自由落下，每次落地后反跳会原高度的一半再落下，求它在第10次落地时，共经过多少米以及第10次反弹多高。
//Hui Li,December 15,2015
# include <iostream>
using namespace std;
void main()
{
	double i, a = 100, h = 100;
	for (i = 1; i<10; i++)
	{
		h = h / 2;
		a = a + 2 * h;
	}



	cout << "共经过" << a << "米，第十次反弹" << h / 2 << "米" << endl;




}