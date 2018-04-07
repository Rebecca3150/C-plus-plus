//max and min
//Hui Li,November 12,2015

#include <iostream>
using namespace std;
#define  SIZE 10

void maxAndMin(int a[], int& maximum, int& minimum)
{
    for(int i = 0;i < SIZE; i++)
		if(i < minimum)
			minimum = i;
		else
			maximum = i;
}


void main()
{
	int numbers[SIZE], maxValue, minValue;
	cout << "Please input " << SIZE << " numbers:";
	for(int i = 0; i < SIZE ; i++)
		cin >> numbers[i];

	maxAndMin(numbers, maxValue, minValue);

	cout << "The maximum is: " << maxValue << endl;
	cout << "The minimum is: " << minValue << endl;
}


	