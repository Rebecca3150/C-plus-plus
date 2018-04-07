//cmath库函数应用
//Hui Li,November 24,2015

#include<iostream>
#include<cmath>
using namespace std;

void main()
{
	double a,b,x;
	cout << "请输入弧度x:";
	cin >> x;
   cout << "请输入任意实数：";
   cin >> a >> b;

   if(a <= 0 || b <= 0)
	   cout << "请重新输入" << endl;
   else
   cout << "以b为底a的对数为：" << log(a)/log(b) << endl;
   cout << "a的b次幂为：" << pow(a,b) << endl;
   cout << "弧度x的正切值为：" << tan(x) << endl;

}