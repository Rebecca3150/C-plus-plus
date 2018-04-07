#include"prime.h"

bool isprime(int N)
{
bool flag;
flag = true;
int m = sqrt(double(N));
	for(int i = 2;i <= m; i++)
   if(N % i == 0)
   {
	   flag = false;
       break;
   }
  
   return flag;
}

void printPrime(int p,int q,int lineofnumber)
{
	int i,m = 0;
      for(i = p;i < q; i++)
         {
	          if(isprime(i))
			  {cout << i << " ";
                            m++; }
              if(m == lineofnumber)
			  { cout << endl;
			       m = 0;}
         }

}