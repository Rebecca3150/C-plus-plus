//
//  main.cpp
//  阶乘求解1（用while语句）
//
//  Created by Liuhao on 15/11/10.
//  Copyright © 2015年 Liuhao. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    //input
    int i=1,a,s=1;
    cout<<"input a integer:";
    cin>>a;
    
    //process
    while (i<=a)
    {
        s=s*i;
        i++;
    }
    
    //output
    cout<<"the factorial of a is:"<<s;
    
    return 0;
}