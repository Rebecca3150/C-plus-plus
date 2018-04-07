//对AreaOfCircle 程序进行补充，使得输出的结果以小数点形式表示，显示正号“+”，area占用位数为15.

#include <iostream>
#include <iomanip>

int main()
{
   double a;

   //输入
   std::cout <<"输入圆的半径";
   std::cin >>a;

   double b;
   
   //计算面积
   b=3.14159*a*a;

   //输出
   std::cout <<"圆的面积为"<<std::showpoint<<std::showpos<<std::setw(15)<<b;



   return 0;

}