#include<iostream>
using namespace std;
char myvowelfunction(char word)
{
	
	
	if(word=='a'||word=='e'||word=='i'||word=='o'||word=='u'||word=='A'||word=='E'||word=='I'||word=='O'||word=='U')
		cout<<"Alphabet is Vowel";
	else
		cout<<"Alphabet is consonant";
	return word;
}
int main()
{
	char input;
	cout<<"Enter An Alphabet ";::cin>>input;
	myvowelfunction(input);
	cout<<myvowelfunction;
	return 0;
}
