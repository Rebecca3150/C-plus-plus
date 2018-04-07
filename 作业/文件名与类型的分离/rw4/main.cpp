//文件名与类型的分离
//Jianfeng Hu,Oct.28.2015

#include<iostream>
#include<string>
using namespace std;

void main()
{
	string str;
	cout<<"输入文件名及其类型(中间用.隔开):";
	cin>>str;

	int i,j,k;

	i=str.length();
	k=str.find(".");

	string str1(str,0,k);
	string str2(str,k+1);

	cout<<"文件名为:"<<str1<<endl;
	cout<<"类型名为:"<<str2<<endl;

}
