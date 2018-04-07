#include<iostream>
#include"cumulativeSum.h"
using namespace std;

void main()
{
  int n;
  cout << "Please input an integer:";
  cin >> n;
  
  cout << "The cumulativesum from 1 to" << n << "is:";
  cout << cumulativeSum(n) << endl;

}