#include"cumulativeSum.h"

//Function denation(º¯Êý¶¨Òå)
double cumulationSum(int n)
{
  double sum = 1.0;

  for(int i = 1;i <=  n; i++)
   sum *= i;

return sum;
}