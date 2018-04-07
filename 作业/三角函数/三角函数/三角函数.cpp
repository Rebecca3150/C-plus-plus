//三角函数
//吴少奇 11月15号
#include <iostream>
#include <cmath>    //三角函数头文件 
using namespace std;

int main()
{
    double a, b, c, d;

    //输入
    cout << "请输入一个变量：";
    cin >> a;

    //运算
    b = sin(a);
    c = cos(a);
    d = tan(a);

    //输出 
    cout << "正弦函数为："<< b << endl;
    cout << "余弦函数为："<< c << endl;
    cout << "正切函数为："<< d << endl;
	cout << "余切函数为：" << 1 / d << endl;

    return 0;
}