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
	int score;
	
	
	do{
		cout<<"Enter your score : ";
		cin>>score;
		
		if(score >= 60)
		cout<<"You passed the exam"<<endl;
		
		else if(score > 0 && score<60)
		cout<<"You don't pass the exam"<<endl;
	}
	
	while(score != -1);
	
	cout<<"No numbers are entered except -1"<<endl;
	system("pause");
	
	return 0;
 }
 
