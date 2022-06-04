#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<iomanip>
using namespace std;
int main()
{
	int n,a;
	cin>>n>>a;
	for (int s=1;s<=n;s++)
	{
		
		cout<<setw(10);
		cout<<s*a<<endl;
	}
return 0;
}
