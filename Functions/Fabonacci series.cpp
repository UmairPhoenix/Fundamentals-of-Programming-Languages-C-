#include <iostream>  
#include<stdlib.h>
using namespace std;  
int main() 

{  
	int a=0,b=1,c,number;    
	cout<<"Enter the number of elements: ";    
	cin>>number;    
	cout<<a<<"\n"<<b<<"\n"; 
		for(int i=2;i<number;++i)//Here i value is stored 2 due to already stored numbers
		{    
			c=a+b;    //c is assigned to be the nyn
			cout<<c<<"\n";    
			a=b;    
			b=c;    
		}    
	return 0;  
}  
