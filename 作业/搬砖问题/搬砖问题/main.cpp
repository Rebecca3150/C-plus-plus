//搬砖问题(男搬4，女搬3，两个小孩抬一转,要求一次全搬完.)
//Hui Li,December 15,2015
# include <iostream>
using namespace std;
void main()
{
	double a, b, c;
	for (a = 1; a <= 36; a++)
	for (b = 0; b <= 36 - a; b++)
	for (c = 0; c <= 36 - a - b; c++)
	if (a + b + c == 36 && 4 * a + 3 * b + c / 2 == 36)
		cout << "需要男生" << a << "个," << "女生" << b << "个，" << "小孩" << c << "个。" << endl;
}