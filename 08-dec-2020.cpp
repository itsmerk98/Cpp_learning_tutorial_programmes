#include<iostream>
using namespace std;

float value(float p, int n, float r)
{
	int year = 1;
	float sum = p;
	
	while(year<=n)
	{
		sum = sum*(1+r);
		year = year+1;
	}
	return(sum);
}
void printfline(char ch, int len)
{
	for(int i=1; i<=len; i++)
	cout<<ch;
	cout<<"\n";
	
}

int main()
{
	float amount;
	
	float value(float p, int n, float r=0.15);
	void printfline(char ch='*', int len=40);
	
	printfline();
	
	amount = value(5000.00,5);
	
	cout<<"\n	Find value = "<<amount <<"\n\n";
	
	printfline('=');
	
return 0;
}
