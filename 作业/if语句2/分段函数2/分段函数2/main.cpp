//·Ö¶Îº¯Êý2£¨ifÓï¾ä£©

#include<iostream>
using namespace std;

void main()
{
	double x,y;
	cout<<"Input x:";
	cin>>x;

	if(x<-10)
		y=0;

	if(x>=-10&&x<0)
		y=2*x+20;

	if(x>=0&&x<20)
		y=20;

	if(x>=20&&x<40)
		y=30-0.5*x;

	if(x>=40&&x<50)
		y=50-x;

	if(x>=50)
		y=0;

    cout<<"x="<<x<<"  "<<"y="<<y;
}