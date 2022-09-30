#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
	//Declaring and N Integer that will take input from the User
	int n;
	//Displaying Message for Asking the User to Enter an Integer value 
	cout<<"Enter Any Digit = ";
	//Cin Takes Input
	cin>>n;
	(n%2==0) ? cout<<n<<"Number Is Even " :  cout<<n<<"Its ODD !!!!";

	return 0;
}


// Possible Test Cases for this Particular Problem
/*
for this either the user enter any value other than the integer results in generating the error
you can use the function to Implement the same Practice 
but to keep it simple it is better to use it as it is.




*/