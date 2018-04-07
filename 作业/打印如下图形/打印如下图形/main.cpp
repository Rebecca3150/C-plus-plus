//¥Ú”°Õº–Œ
//Hui Li,November 26,2015
#include<iostream>
using namespace std;
void main()
{
	int m,n;
		 for(m=1;m<=5;m++)  
		 {  
			 for(n=1;n<=2*m-1;n++)   
				 cout<<"*";   
			 cout<<endl;
		 }
		 for(m=1;m<=4;m++)  
		 { 
			 
			 for(n=9;n>=2*m+1;n--)  
				 cout<<"*";  
			 cout<< endl;
		 }
		 
}