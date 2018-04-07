//退圈问题
//Hui Li,November 26,2015
#include <iostream>
using namespace std;

void main()
{
     int n;
	 cout << "请输入人数(n小于1000，大于1)：";
	 cin >> n;

	 int flag[1000],i;
     for(i = 0; i < n; i++)
		 flag[i] = 1;
    
	 int index = 0;
	 int tuiquanshu = 0;
	 int m = 0;
     while(1)
	 {
           if(flag[index] == 1)
                m++;
    
		   if(m == 3)
		   {
			   tuiquanshu++;
			   m = 0;
			   flag[index] = 0;
		   }
           
		   if(tuiquanshu == n - 1)
			   break;

		   index++;
		   if(index == n)
			   index = 0;
	 }

	 for(i = 0; i < n; i++)
		 if(flag[i] == 1)
		 {
			 cout << "最后剩下第" << i + 1 << "位置上的人!" << endl;
			 break;
		 }
}