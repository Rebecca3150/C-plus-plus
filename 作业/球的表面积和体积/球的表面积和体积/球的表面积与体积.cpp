//球的表面积和体积
//吴少奇 11月15号
#include <iostream>
using namespace std;

int main ()
{
  double a, b, c;
   
  //输入
  cout << "请输入球的半径："<< endl;
  cin >> a;

  //运算
  b = 4.0 * 3.14159 * a * a;
  c = (4.0/3.0) * 3.14159 * a * a * a;

  //输出
  cout << "球的表面积为：" << b << endl;
  cout << "球的体积为：" << c << endl;

  return 0;
}