//输出乘法口诀表
//Hui Li,November 26,2015
#include<iostream>
using namespace std;
int main()
{
	int i,j;
for(i = 1;i <= 9; i++)
  {
	for(j = 1;j <= 9; j++)
		cout <<j << "x" << i << "=" << j * i << " ";
	cout << endl;
  }

}





