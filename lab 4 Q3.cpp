/**
*@ Siti Munizaiyanah binti Bahaman
*@ Matric No: 2116492
*@ Lab #4 Section 4
*/

#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;
int main()
{
	int num1, num2, temp;
	int multiples3 = 0;
	int multiples5 = 0;
	
	cout<<"Enter two integers : "; 
	cin>>num1>>num2;
	cout<<endl;
	
	if(num2<num1)
	{
		temp = num2; 
		num2 = num1; 
		num1 = temp; 
	}
	
	temp = num1;
	
	while(temp <= num2) 
	{
		if(temp % 3 == 0) 
			multiples3++;
		if(temp % 5 ==0 )
			multiples5++;
		temp++;
	}
	
	cout<<"Multiple of 3 between "<<num1<<" and "<<num2<<" : "<<multiples3<<endl;
	cout<<"Multiple of 5 between "<<num1<<" and "<<num2<<" : "<<multiples5<<endl;
	
	return 0;
}
