//����10��string�����ַ����������ֵ�˳������������
//Jianfeng Hu,Nov.5.2015

#include<iostream>
#include<string>
using namespace std;

void main()
{
	string str[10];
	int i,j;

	cout<<"������10��string�����ַ���:";
	for(i=0;i<10;i++)
		cin>>str[i];

	string temp;

	for(i=0;i<9;i++)
	{
		for(j=0;j<9-i;j++)
		{
			if(str[j+1]<str[j])
			{
				temp=str[j];
				str[j]=str[j+1];
				str[j+1]=temp;
			}
		}
	}

	cout<<"Result is:"<<endl;
	for(i=0;i<10;i++)
		cout<<str[i]<<" ";

}
