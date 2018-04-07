//·Ö¶Îº¯Êı2£¨if...elseÓï¾ä£©

#include<iostream>
using namespace std;

void main()
{
	double x,y;
	cout<<"Input x:";
	cin>>x;

	if(x<-10)
		y=0;

	else if(x<0)
		y=2*x+20;

	else if(x<20)
		y=20;

	else if(x<40)
		y=30-0.5*x;

	else if(x<50)
		y=50-x;

	else
		y=0;

	cout<<"x="<<x<<"  "<<"y="<<y;
}