//输入为正数的八进制，输出为其十进制。

#include <iostream>

int main()
{
	int n;

    //Input
	std::cout <<"输入一个八进制的数字";
	std::cin >>std::oct >> n;

	//Output
	std::cout << "其十进制为" << std::dec << n <<std::endl;


    return 0;

}
