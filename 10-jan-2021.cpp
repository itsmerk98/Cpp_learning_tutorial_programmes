#include<iostream>
using namespace std;

int main()
{
	int i,j;
	
	for(i=0;i<=10;i++)
	{
		for(j=0;j<=10;j++)
		{
	 	 	if(i==j||i+j==10)   //ek mint bhai plas print karna he
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<endl;
	}
return 0;
}
