#include<iostream>
#include"prime.h"

int main()
{
   int p,q,lineofnumber;
   cout << "�����������ķ�Χ(p,q)��" ;
   cin >> p >> q;

   cout << "������ÿ����ʾ�����ĸ�����" ;
   cin >> lineofnumber;

   printPrime(p,q,lineofnumber);

	return 0;
}