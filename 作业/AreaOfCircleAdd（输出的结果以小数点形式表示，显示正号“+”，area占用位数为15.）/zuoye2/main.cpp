//��AreaOfCircle ������в��䣬ʹ������Ľ����С������ʽ��ʾ����ʾ���š�+����areaռ��λ��Ϊ15.

#include <iostream>
#include <iomanip>

int main()
{
   double a;

   //����
   std::cout <<"����Բ�İ뾶";
   std::cin >>a;

   double b;
   
   //�������
   b=3.14159*a*a;

   //���
   std::cout <<"Բ�����Ϊ"<<std::showpoint<<std::showpos<<std::setw(15)<<b;



   return 0;

}