#include <iostream>
using namespace std;

void main()
{
     int n;
	 cout << "����������(nС��1000������1)��";
	 cin >> n;

	 int flag[1000],i;
     for(i = 0; i < n; i++)
		 flag[i] = 1;//1�������ˣ�0����û����
    
	 int index = 0;//�����±�
	 int tuiquanshu = 0;//��ǰ�˳�������
	 int m = 0;//����ÿ3���˾��˳�
     while(1)
	 {
           if(flag[index] == 1)//������
                m++;
    
		   if(m == 3)//���˳�
		   {
			   tuiquanshu++;
			   m = 0;
			   flag[index] = 0;
		   }
           
		   if(tuiquanshu == n - 1)//�˳�n-1�˺���ֹ
			   break;

		   index++;
		   if(index == n)//���±�����Ϊ0����ΪȦ
			   index = 0;
	 }

	 for(i = 0; i < n; i++)
		 if(flag[i] == 1)
		 {
			 cout << "���ʣ�µ�" << i + 1 << "λ���ϵ���!" << endl;
			 break;
		 }
}