//����������Լ����
//��ۣ�2016.1.16

#include<iostream>
using namespace std;
void fun(int m, int n, int&gy, int&gb)
{
	int min=m<n? m:n;
	int i;
	for(i=min; ;i--)
		if(m%i==0&&n%i==0)
			break;
	gy=i;
	gb=(m*n)/i;
}

void main()
{
	int m,n,gy,gb;

	cout<<"����������������:";
	cin>>m>>n;

	fun(m,n,gy,gb);
	cout<<"���Լ������С�������ֱ�Ϊ:"<<gy<<" "<<gb;

}