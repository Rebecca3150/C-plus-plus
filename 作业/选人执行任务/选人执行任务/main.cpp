//选人执行任务
//Hui Li,December 4,2015
#include<iostream>
#include <iomanip>
using namespace std;
void main()
{
	int A,B,C,D,E,F;
	for(A = 0;A <= 1; A++)
		for(B = 0;B <= 1; B++)
			for(C = 0;C <= 1; C++)
				for(D = 0;D <= 1; D++)
					for(E = 0;E <= 1; E++)
						for(F = 0;F <= 1; F++)
							{
								if(C == 0)//C不去，B也不去
								{
									if(B == 0 && (C + D == 1) && (D + E == 0 || D + E == 2) && (A + B + F == 2) && (C + F < 2) && (E + F >= 1))
                                   {
	                                 cout << "A:" << A << endl;
	                                 cout << "B:" << B << endl;
	                                 cout << "C:" << C << endl;
	                                 cout << "D:" << D << endl;
	                                 cout << "E:" << E << endl;
	                              	 cout << "F:" << F << endl;
	                               }
							   }
							else
								{
									if((C + D == 1) && (D + E == 0 || D + E == 2) && (A + B + F == 2) && (C + F < 2) && (E + F >= 1))
								  {
									 cout << "A:" << A << endl;
	                                 cout << "B:" << B << endl;
	                                 cout << "C:" << C << endl;
	                                 cout << "D:" << D << endl;
	                                 cout << "E:" << E << endl;
	                              	 cout << "F:" << F << endl;
								 }
							 }
						}
}