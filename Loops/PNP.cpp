#include <iostream>
#include<stdlib.h>
using namespace std;
int main()
{
    int a,b,i,flag;
    cout<<"Initial Value : ";
    cin>>a;
    cout<<"Final Value : ";
    cin>>b;
    cout<<"Prime numbers between "<<a<<" and "<<b<<" are:\n";
    //Nested Loops
    
    while(a<b)
    {
        flag=0;
        for(i=2;i<=a/2;++i)
        {
            if(a%i==0)
            {
                flag=1;
                break;
            }
        }
        if (flag==0)
            cout<<a<<"\n";
        ++a;
    }
    return 0;
}

