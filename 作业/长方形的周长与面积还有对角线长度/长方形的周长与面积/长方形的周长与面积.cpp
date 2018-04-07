//长方形的周长、面积、对角线长度
//吴少奇 11月15号
#include <iostream>
#include<cmath>              //sqrt与pow的头文件
using namespace std;

int main ()
{
   double a, b, c, d, f;

   //输入
   cout << "请分别输入长方形的长与宽：";
   cin >> a >> b;

   //运算
   c = 2 * ( a + b );
   d = a * b;
   f = sqrt( a * a + b * b);

   //输出
   cout << "长方形的周长为：" << c << endl;
   cout << "长方形的面积为：" << d << endl;
   cout << "长方形的对角线为：" << f << endl;

   return 0;
}