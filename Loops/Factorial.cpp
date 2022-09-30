#include <iostream>  
#include<stdlib.h>
using namespace std;  
int main()  
{  
    int fact=1,number;    
    cout<<"Enter any Number: ";    
    cin>>number;    

    //
    for(int i=1;i<=number;i++)
	  {  
	   
      fact=fact*i;    
    }    
    cout<<"Factorial of " <<number<<" is: "<<fact<<endl;  
  return 0;
}  
