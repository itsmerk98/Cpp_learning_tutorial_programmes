#include<iostream>
using namespace std;

int main()
{
	int a[5]={10,20,30,40,50};
	int i=3;
	
	cout<<a[i];
	
	a[i]=a[i+1];
	
	cout<<a[i];
	
	
return 0;
}
