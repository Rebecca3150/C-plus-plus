//幂函数
//吴少奇 11月15号
#include <iostream>
#include <cmath>     //pow的头文件
using namespace std;
int main()
{
  //输入
  double a, b, c, d;
  cout << "请输入一个变量：";
  cin >> a;

  //运算
  b = pow (a,2);
  c = pow (a,3);
  d = pow (a,3.5);

  //输出
  cout << "变量的平方为：" << b << endl;
  cout << "变量的三次方为："<< c << endl;
  cout << "变量的三点五次方为："<< d << endl;

  return 0;
}