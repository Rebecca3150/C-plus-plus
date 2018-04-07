//计算圆的周长
//徐浩军 2015.11.16

#include <iostream>
using namespace std;

void main()
{
	float circumference, r;//r为半径
	
	//input
	cout << "请输入圆的半径：";
	cin >> r;
	
	//process
	circumference = 2.0 * r * 3.1415926;
	
	//output
	cout << "圆的周长为：";
	cout << circumference << "\t";
}