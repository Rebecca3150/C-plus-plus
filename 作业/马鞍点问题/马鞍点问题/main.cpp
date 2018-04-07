//马鞍点问题(先找出i行中最大的，再判断是否为该列最小)
//Hui Li,December 15,2015
#include<iostream>
using namespace std;
void main()
{
	//输入
	bool flag;
	int a[2][2];
	int i,j,max,maxlie;
	cout << "请输入一个2行2列矩阵" << endl;
	for(i = 0;i < 2; i++)
		for(j = 0;j < 2; j++)
			cin >> a[i][j];

	//找出i行中最大数
	for(i = 0;i < 2; i++)
	{
		max = a[i][0];
	maxlie = 0;
	for(j = 1;j < 2; j++)
		if(a[i][0] < a[i][j])
			{
				max = a[i][j];
	maxlie = j;
		}
	}
	flag = 1;//做标记，找出i行中最大的，并标记此数所在列

	//判断是否为该列最小
	for(i = 0;i < 2; i++)
		if(a[i][maxlie] < max)
			flag = 0;//若为最小，标记为0

	//输出
	if(flag == 0)
		cout << "此数列存在马鞍点！" << " 且马鞍点为：" << max;
	else
		cout << "此数列不存在马鞍点！" << endl;
}