//�ж��Ƿ�Ϊ2��3�ı�����
//*****��2015��11��10�ա�

#include<iostream>
using namespace std;

int main()
{
	//����
	int i;
	cout <<"������һ��������";
	cin >>i;
  
	//�ж�
	bool flag;
	if(i%2==0&&i%3==0)
		flag=1;
	else
		flag=0;

	//���
	if(flag==1)
	    cout <<i<<"��2��3�ı���"<<endl ;
	else
		cout<<i<<"����2��3�ı���"<<endl;

	return 0;
}