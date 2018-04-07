//
//  main.cpp
//  阶乘求解2（用while语句）
//  数出1到20的阶乘
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
    while(j<=20)
    {
        while(t<=j)
        {
            s=s*t;
            t++;
        }
        
        j++;
        
        cout<<s<<endl;//output
    }
    return 0;
}