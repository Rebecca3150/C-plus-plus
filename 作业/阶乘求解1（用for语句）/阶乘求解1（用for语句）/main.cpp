//
//  main.cpp
//  阶乘求解1（用for语句）
//
//  Created by Liuhao on 15/11/10.
//  Copyright © 2015年 Liuhao. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    //input a
    int a,i=1,s=1;
    cout<<"input a integer:";
    cin>>a;
    
    //process
    for(i=1;i<=a;i++)
    {
        s=s*i;
    }
    
    //output
    cout<<"the factorial of a is:";
    cout<<s;
    
    return 0;
    
}