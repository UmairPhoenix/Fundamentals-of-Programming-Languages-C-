#include<iostream>
using namespace std;
int main()
{
	int sum=0,a=1,n;
	cout<<"Enter Any Number ";
	cin>>n;
	for (int i=0; i<=n; i++)
	{
		cout<<i<<" ";
		sum+=i;
	}
	cout<<"Total "<<sum;
}
