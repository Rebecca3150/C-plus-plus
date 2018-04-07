//约瑟夫环问题
//Hui Li,December 15,2015
# include <iostream>

using namespace std;
void main()

{
	int M(int a[10], int y);
	int a[10], n;
	int c;
	cout << "请输入报数上限值" << endl;
	cin >> n;

	c = M(a, n);
	cout << c;

}





int M(int a[], int y)
{
	int h = 0, m = 0;
	int t;
	int i;
	for (i = 0; i<10; i++)
		a[i] = 1;
	i = 0;
	while (h<9)
	{

		if (a[i] != 0)
		{
			m = m + 1;
			if (m == y)
			{
				a[i] = 0;
				m = 0;
				h = h + 1;
			}


		}

		i = i + 1;
		if (i == 10)
			i = 0;
	}
	for (i = 0; i<10; i++)
	{
		if (a[i] == 1)
			t = i + 1;
	}
	return t;
}