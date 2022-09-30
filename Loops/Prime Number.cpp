#include <iostream>  
using namespace std;  
int main()  
{  
  int a,b=0,c=0;  
  cout << "Enter the Number to check Prime: ";  
  cin >> a;  
  b=a/2;  
  for(int i = 2; i <= b; i++)  
  {  
      if(a % i == 0)  
      {  
      	  c=1;
          cout<<"Number is not Prime."<<endl;  
            
          break;  
      }  
  }  
  if (c==0)  
      cout << "Number is Prime."<<endl;  
  return 0;  
}
