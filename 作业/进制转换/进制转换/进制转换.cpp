//不同进制输出100
//吴少奇 11月15号
#include <iostream>
using namespace std;
int main()
{
	int i1, i2, i3;

	i1 = 100;    //十进制
	i2 = 0144;   //100的八进制表示
	i3 = 0x64;   //100的十六进制表示

	//输出
	cout << "i1 = " << i1 << endl;
	cout << "i2 = " << i2 << endl;
	cout << "i3 = " << i3 << endl;

	return 0;
}