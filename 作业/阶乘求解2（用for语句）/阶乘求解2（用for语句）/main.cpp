//
//  main.cpp
//  阶乘求解2（用for语句）
//
//  Created by Liuhao on 15/11/10.
//  Copyright © 2015年 Liuhao. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int j=1,t=1;
    double s=1;//s足够大
    
    cout<<"一到二十的阶乘："<<endl;
    
    //process
    for(j=1;j<=20;j++)
    { for(t=1,s=1;t<=j;t++)//s需要重置！
        {
            s=s*t;
        }
        cout<<s<<endl;
    }
    
    return 0;
}