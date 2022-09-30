#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int year;
	cout<<"Enter A Year ";
	cin>>year;
	//Conditional Statement
	if(year%4==0)
	cout<<year<<" is a leap year ";
		else
	cout<<year<<" is not a leap year ";	

	return 0;
}
