//Hui Wang, Nov. 20, 2015
#include <iostream>
#include "gongYueAndBei.h"
using namespace std;

void main()
{
     int m,n,yue,bei;
	 cout << "����������������:";
	 cin >> m >> n;
     
	 gongYueAndBei(m,n,&yue,&bei);
	 cout << "���Լ������С�������ֱ�Ϊ:" ;
	 cout << yue << " " << bei << endl;

}