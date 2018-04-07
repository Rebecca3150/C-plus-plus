//Hui Wang, Nov. 20, 2015
#include <iostream>
#include "gongYueAndBei.h"
using namespace std;

void main()
{
     int m,n,yue,bei;
	 cout << "请输入两个正整数:";
	 cin >> m >> n;
     
	 gongYueAndBei(m,n,&yue,&bei);
	 cout << "最大公约数和最小公倍数分别为:" ;
	 cout << yue << " " << bei << endl;

}