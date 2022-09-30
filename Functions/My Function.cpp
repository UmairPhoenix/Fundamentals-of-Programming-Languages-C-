#include<iostream>
#include<stdlib.h>
using namespace std;
//Using Function
int leapyearfunction(int y)
{
	if(y%4==0)
	cout<<y<<" is a leap year ";
		else
	cout<<y<<" is not a leap year ";
	
}
int main()
{
	int year;
	cout<<"Enter A Year To Begin = ";::cin>>year;
	leapyearfunction(year);//Proviking the Function
	cout<<leapyearfunction;
	return 0;
}
