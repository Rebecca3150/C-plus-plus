//��ש����(�а�4��Ů��3������С��̧һת,Ҫ��һ��ȫ����.)
//Hui Li,December 15,2015
# include <iostream>
using namespace std;
void main()
{
	double a, b, c;
	for (a = 1; a <= 36; a++)
	for (b = 0; b <= 36 - a; b++)
	for (c = 0; c <= 36 - a - b; c++)
	if (a + b + c == 36 && 4 * a + 3 * b + c / 2 == 36)
		cout << "��Ҫ����" << a << "��," << "Ů��" << b << "����" << "С��" << c << "����" << endl;
}