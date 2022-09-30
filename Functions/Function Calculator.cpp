#include<iostream>
#include<stdlib.h>
using namespace std;
Arthemetic(int x, int y)
{
	int z;
	z=x+y;
	cout<<"Sum is "<<z;
	
}
main()
{
	
	int v,w,sum;
	
	cout<<"Enter first number = ";
	cin>>v;
	cout<<"\nEnter second number = ";
	cin>>w;
	//Passing the Reference of the values Taken from the User to Generate the Results

	sum=Arthemetic(v,w);

	
}
