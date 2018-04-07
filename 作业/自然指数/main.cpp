//自然指数
//徐浩军 2015.11.16

#include <iostream>
#include <cmath>

int main()
{
	//Input
	double x;
	std::cout << "Please input a real number：";
	std::cin >> x;

    //Process
	double y;
	y = exp(x);
	
    //Output
	std::cout << "The EXP of " << x << " is " << y << "."; 

    return 0;
}
