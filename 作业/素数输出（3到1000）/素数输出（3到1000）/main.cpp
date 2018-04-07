//
//  main.cpp
//  素数输出（3到1000）
//
//  Created by Liuhao on 15/11/16.
//  Copyright © 2015年 Liuhao. All rights reserved.
//

#include <iostream>
using namespace std;

bool su(int n)
{
    int i;
	bool flag = true;
    for(i=2;i<n;i++)
    {if(n%i==0)
        flag=false;
        break;
    }
    return flag;
}

int main()
{
    int n;
    /*int j*/
    
    for(n=3;n<=1000;n++)
    {
        if(su(n))
        {
            cout<<n<<" ";
          //  j++;
          //(五个一行)
        }
       /* if(j%5==0)
            cout<<endl;*/
    }
    return 0;
    
}


