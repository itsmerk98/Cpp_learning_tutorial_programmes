#include<iostream>
using namespace std;

int main()
{
	int a,b,c;
	
	cout<<"Enter the first value : ";
	cin>>a;
	cout<<"Enter the second value : ";
	cin>>b;
	cout<<"Enter the thrid value : ";
	cin>>c;
	
	if(a>b & a>c)
	{
		cout<<"A is largest number ! ";
	}
	else if(b>a & b>c)
	{
		cout<<"B is largest number ! ";
	}
	else if(c>b & c>a)
	{
		cout<<"C is largest number ! ";
	}
	else
	{
		cout<<"All value is equal ! ";
	}
	
return 0;
}
