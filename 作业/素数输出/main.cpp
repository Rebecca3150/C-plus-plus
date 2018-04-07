#include<iostream>
#include"prime.h"

int main()
{
   int p,q,lineofnumber;
   cout << "请输入整数的范围(p,q)：" ;
   cin >> p >> q;

   cout << "请输入每行显示素数的个数：" ;
   cin >> lineofnumber;

   printPrime(p,q,lineofnumber);

	return 0;
}