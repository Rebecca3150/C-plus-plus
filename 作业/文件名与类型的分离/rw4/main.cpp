//�ļ��������͵ķ���
//Jianfeng Hu,Oct.28.2015

#include<iostream>
#include<string>
using namespace std;

void main()
{
	string str;
	cout<<"�����ļ�����������(�м���.����):";
	cin>>str;

	int i,j,k;

	i=str.length();
	k=str.find(".");

	string str1(str,0,k);
	string str2(str,k+1);

	cout<<"�ļ���Ϊ:"<<str1<<endl;
	cout<<"������Ϊ:"<<str2<<endl;

}
