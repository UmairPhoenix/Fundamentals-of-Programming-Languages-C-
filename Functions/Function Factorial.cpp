#include<iostream>
#include<stdlib.h>
using namespace std;

//User Defined Function
fact(int n)
{
	long double f=1;
	
	for(int q=1;q<=n;q++)
	{
		f=f*q;
		
	}
	cout<<"Factorial =  "<<f;
	
}
int main()
{
	int number,factorial;
	cout<<"Enter A Positive Integer = ";cin>>number;
	fact(number);
	
}
