//��������(���ҳ�i�������ģ����ж��Ƿ�Ϊ������С)
//Hui Li,December 15,2015
#include<iostream>
using namespace std;
void main()
{
	//����
	bool flag;
	int a[2][2];
	int i,j,max,maxlie;
	cout << "������һ��2��2�о���" << endl;
	for(i = 0;i < 2; i++)
		for(j = 0;j < 2; j++)
			cin >> a[i][j];

	//�ҳ�i���������
	for(i = 0;i < 2; i++)
	{
		max = a[i][0];
	maxlie = 0;
	for(j = 1;j < 2; j++)
		if(a[i][0] < a[i][j])
			{
				max = a[i][j];
	maxlie = j;
		}
	}
	flag = 1;//����ǣ��ҳ�i�������ģ�����Ǵ���������

	//�ж��Ƿ�Ϊ������С
	for(i = 0;i < 2; i++)
		if(a[i][maxlie] < max)
			flag = 0;//��Ϊ��С�����Ϊ0

	//���
	if(flag == 0)
		cout << "�����д������㣡" << " ������Ϊ��" << max;
	else
		cout << "�����в��������㣡" << endl;
}