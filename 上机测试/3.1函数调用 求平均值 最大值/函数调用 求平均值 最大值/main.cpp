//������������ �����ƽ��ֵ�����ֵ
//��ۣ�2016.1.16
#include<iostream>
using namespace std;
#define n 4
void fun(int a[],int *p_max, float *p_aver)
{
	*p_max=a[0];
	float sum=0;
	for(int i=1;i<n;i++)
		if(a[i]>*p_max)
			*p_max=a[i];
	for(int i=0;i<n;i++)
		sum+=i;
	*p_aver=sum/n;


}
void main()
{
	int a[n],i,max;
	float aver;

	cout<<"����������"<<n<<"����:"<<endl;
	for(i=0;i<n;i++)
		cin>>a[i];

	fun(a,&max,&aver);

	cout << "���ֵΪ:" << max << endl << "ƽ��ֵΪ:" << aver << endl;
}