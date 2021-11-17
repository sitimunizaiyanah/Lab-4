/**
*@ Siti Munizaiyanah binti Bahaman
*@ Matric No: 2116492
*@ Lab #4 Section 4
*/

#include<string>
#include<iostream>
using namespace std;
int main()
{
    string a;

    cout << "Enter an integer number: ";
    cin >> a;


    for(int i=0; i<a.size(); ++i)
    cout << a[i] << ' ';
    cout << endl;


    int total = 0;
    for(int i=0; i<a.size(); ++i)
    total += a[i] - '0';
    cout << "The sum of the total individual digits is: " << total << endl;

    system("pause"); 
    return 0; 
}



