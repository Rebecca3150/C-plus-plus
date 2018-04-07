//判断是否为2或3的倍数。
//*****，2015年11月10日。

#include<iostream>
using namespace std;

int main()
{
	//输入
	int i;
	cout <<"请输入一个整数：";
	cin >>i;
  
	//判断
	bool flag;
	if(i%2==0&&i%3==0)
		flag=1;
	else
		flag=0;

	//输出
	if(flag==1)
	    cout <<i<<"是2和3的倍数"<<endl ;
	else
		cout<<i<<"不是2和3的倍数"<<endl;

	return 0;
}