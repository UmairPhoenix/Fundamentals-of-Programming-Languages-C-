#include<iostream>
using namespace std;
int main()
{
	int a,b;::cout<<"Enter Numbers = ";::cin>>a>>b;
	cout<<"Before Swap"<<" a = "<<a<<" b = "<<b<<endl;
	a=a*b;
	b=a/b;
	a=a/b;
	cout<<" After Swap"<<" a = "<<a<<" b = "<<b;
}
