#include <iostream>
using namespace std;

void main()
{
     int n;
	 cout << "请输入人数(n小于1000，大于1)：";
	 cin >> n;

	 int flag[1000],i;
     for(i = 0; i < n; i++)
		 flag[i] = 1;//1代表有人，0代表没有人
    
	 int index = 0;//数组下标
	 int tuiquanshu = 0;//当前退出的人数
	 int m = 0;//控制每3个人就退出
     while(1)
	 {
           if(flag[index] == 1)//数人数
                m++;
    
		   if(m == 3)//人退出
		   {
			   tuiquanshu++;
			   m = 0;
			   flag[index] = 0;
		   }
           
		   if(tuiquanshu == n - 1)//退出n-1人后，终止
			   break;

		   index++;
		   if(index == n)//让下标重新为0，变为圈
			   index = 0;
	 }

	 for(i = 0; i < n; i++)
		 if(flag[i] == 1)
		 {
			 cout << "最后剩下第" << i + 1 << "位置上的人!" << endl;
			 break;
		 }
}