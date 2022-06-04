#include<iostream>
using namespace std;
int main()
{
//	int a,b;
	
	for(int i=0;i<=5;i++)
	{
		for(int j=0;j<=5;j++)
		{
			if(i+j==4||i+j==5||i+j==6||i+j==7||i+j==8)
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
/*
	int Long[]={10,20,30,40,45,250,60,70,80,90,67,90,100};
	int i=9;
	
	Long[i];
	
	cout<<setw(10);
	
	cout<<Long[i];

	for(i=0;i<5;i++)
	{
		cout<<Long[i]<<endl;
	}
*/	

